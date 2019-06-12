/*******************************************************************
 ** File: Project 0 
 ** Project: CMSC 341 Project 0
 ** Author: Michael Maduako
 ** Date: 2/13/16
 ** Section: 
 ** E-mail: maduako1@umbc.edu
 **
 **  This is the main driver for project 0. This program reads 2 files
 **and stores the country statistics from the first file and the countries
 **and continents from the second file. Then it records the statistics of
 ** the countries with the highest GDP spent, population and literacy rate
 **

*****************************************************************/


#include <iostream>
#include "Continent.h"
#include "Country.h"
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

vector<Continent> readFromFile(string file1, string file2);


int main()
{

    string file1 = "2013WorldBankEducationCensusData.txt";
    string file2 = "CountriesContinents.txt";
    vector<Continent>world = readFromFile(file1, file2); //Holds all of the Continent vectors read from the 2 files


	
    for(unsigned int i = 0; i < world.size(); i++) //Access every continent in the world to calculate the data
      cout << world[i] << endl;//overloaded display of information


    return 0;
}


vector<Continent> readFromFile(string file1, string file2)
{
  vector<Continent> continents;//Holds a vector of continents that will be returned 
    vector<Country> clist; 
    Country tempC;//Holds a country that will be stored in clist

/***************************Reading first file**********************************************************************************/

    ifstream infile;
    infile.open(file1.c_str(), ios_base::in);
  
    if (infile.fail())
    {
        cout << "The File was not successfully opened." << endl;
        exit(1); // ends ENTIRE program!!!
    }


    string country;
    string pop;
    string adultLit;
    string GDP;
    string primCompRateT;
    string primCompM;
    string primCompF;
    string youthLitF;
    string youthLitM;
  
  
    getline(infile, country);
  
    while (infile >> country >>pop >> adultLit >> GDP >> primCompRateT >> primCompM >> primCompF >> youthLitF >> youthLitM)
      { //Reads in the respective information as it appears in the text file line by line
      
      
      
        long pop1 = atol(pop.c_str());                 //Converting all of the atoms from the file to their 
        float adultLit1 = atof(adultLit.c_str());      //   appropriate types
        float primCompF1 = atof(primCompF.c_str());
        float primCompM1 = atof(primCompM.c_str());
        float primCompRateT1 = atof(primCompRateT.c_str());
        float GDP1 = atof(GDP.c_str());
        float youthLitF1 = atof(youthLitF.c_str());
        float youthLitM1 = atof(youthLitM.c_str());
      
      
        tempC.setName(country);                         //Sets the country's data 
        tempC.setPopulation(pop1);
        tempC.setLiteracyRate(adultLit1);
        tempC.setPrimaryCompletionFemale(primCompF1);
        tempC.setPrimaryCompletionMale(primCompM1);
        tempC.setPrimaryCompletionTotal(primCompRateT1);
        tempC.setEducationGDPSpent(GDP1);
        tempC.setYouthLitRateFem(youthLitF1);
        tempC.setYouthLitRateMale(youthLitM1);
      
      
        clist.push_back(tempC); //add every country into this vector of countries
      
      
      }
  
    infile.close();
  
/*********************Reading second file**************************************************************/	
    ifstream infile2;
    string name;
    string contName;
    string tab;
    unsigned int num;
    vector<Country> temp;
  
  
    infile2.open(file2.c_str(), ios_base::in);
  
    if (infile2.fail())
      {
        cout << "The File was not successfully opened." << endl;
        exit(1); // ends ENTIRE program!!!
      }
  
  
  
    while (infile2 >> contName >> tab >> num) //Loops through each country based on name, -- , and number 
      {
        getline(infile2, name);	
      
        for (unsigned int i = 0; i < num; i++)
	  {		
	    getline(infile2, name);
	  
	    for (unsigned int j = 0; j < clist.size(); j++)
	      {
	        if (clist[j].getName() == name) //Compares the country in the clist vector with the name in the file
		  {
		    temp.push_back(clist[j]);  // in order to assign the conutries a continent 
		  }
	      }
	  
	  }	
        Continent *con= new Continent(temp,contName);
        continents.push_back(*con);
        temp.clear();
      }
  
  
    infile2.close();
  
/************************************************************************************************************************************/
  
  
  return continents;
}
