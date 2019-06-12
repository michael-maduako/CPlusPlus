/****************************************************
** File: Continent.cpp
** Project: CMSC 341 Project 0, Spring 2016
** Author: Michael Maduako
** Date: 2/13/16
** Section:
** E-mail: maduako1@umbc.edu
**
**  This file contains the continent declaration file for Project 0.
** This file sets the continent's variables and uses the operator
** << to display all of the information
**
*******************************************************/




#include "Continent.h"
#include "Country.h"

Continent::Continent()
{

}


Continent::Continent(vector<Country>countriesContained , string name)
{
    long totalPopulation = 0;

    setCountriesInContinent(countriesContained);
    setName(name);

    // get total popualation
    for (unsigned int i = 0; i < countriesContained.size(); i++)
      {
	totalPopulation += countriesContained.at(i).getPopulation();
      }
	
    setPopulation(totalPopulation);

      
}


void Continent::setCountriesInContinent(vector<Country> c)
{
    countriesInContinent = c;
}

void Continent::setHighestPopulation(Country c)
{
    highestPopulation = c;
}
void Continent::setHighestGDPSpent(Country c)
{
    highestGDPSpent = c;

}
void Continent::setHighestLiteracyRate(Country c)
{

    highestLiteracyRate = c;
}

vector<Country> Continent::getCountriesInContinent() const
{
    return countriesInContinent;
}
Country Continent::getHighestPopulation() const 
{
    long maxPop = 0;
    Country tempMax;
    for (unsigned int i = 0; i < countriesInContinent.size(); i++) //Traverse the vector of countries 
	{

	  if (countriesInContinent[i].getPopulation() > maxPop)
	    {
	      maxPop = countriesInContinent[i].getPopulation();
	      tempMax = countriesInContinent[i];
	    }

	}

    return tempMax;
}

Country Continent::getHighestGDPSpent() const
{ 
    //Find country with largest GDP spent in the continent
    float maxGDP = 0;
    Country tempMax;
    for (unsigned int i = 0; i < countriesInContinent.size(); i++) //Traverse the vector of countries
      {

	if (countriesInContinent[i].getEducationGDPSpent() > maxGDP)
	  {
	    maxGDP = countriesInContinent[i].getEducationGDPSpent();
	    tempMax = countriesInContinent[i];
	  }

      }

    return tempMax;
}
Country Continent::getHighestLiteracyRate() const
{
    //Find country with largest population in the continent
    float maxLit = 0;
    Country tempMax;
    for (unsigned int i = 0; i < countriesInContinent.size(); i++) //Traverse the vector of countries
      {

	if (countriesInContinent[i].getLiteracyRate() > maxLit)
	  {
	    maxLit = countriesInContinent[i].getLiteracyRate();
	    tempMax = countriesInContinent[i];
	  }

       }

    return tempMax;
}


ostream& operator<<(ostream& sout, const Continent& c)
{
    string name;	


    //Find countries with largest GDP, population and total lit. rate
	
	
    sout << c.getName() << "\n" << "Population: " << c.getPopulation() << "\n" 
	 << "Country with highest literacy rate: " <<c.getHighestLiteracyRate().getName()
         << " with a population of "<< c.getHighestLiteracyRate().getPopulation() 
         << " and a literacy rate of " << c.getHighestLiteracyRate().getLiteracyRate() 
         << "\ncountry with highest GPD spendature on education: " << c.getHighestGDPSpent().getName() 
         << " with a population of " << c.getHighestGDPSpent().getPopulation() 
         << " and a literacy rate of " << c.getHighestGDPSpent().getLiteracyRate()
         << "\ncountry with highest population: " << c.getHighestPopulation().getName() 
         << " with a population of " << c.getHighestPopulation().getPopulation() 
         << " and a literacy rate of " << c.getHighestPopulation().getLiteracyRate() <<endl;


    return sout;
}
