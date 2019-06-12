/****************************************************
** File: Continent.h
** Project: CMSC 341 Project 0, Spring 2016
** Author: Michael Maduako
** Date: 2/13/16
** Section:
** E-mail: maduako1@umbc.edu
**
**  This file contains the continent header file for Project 0.
** This file inherits from the country class and initializes
** the continent's vector of countries, the
** country with the highest population, the country with
** the most GDP spent and the country with the highest
** litteracy rate.
*******************************************************/




#ifndef CONTINENT_H_
#define CONTINENT_H_
#include "Country.h"
#include <vector>


class Continent : public Country {

public:

    Continent();
    Continent(vector<Country>countriesContained, string name);
    void setCountriesInContinent(vector<Country>);
    void setHighestPopulation(Country);
    void setHighestGDPSpent(Country);
    void setHighestLiteracyRate(Country);

    vector<Country> getCountriesInContinent() const;
    Country getHighestPopulation() const;
    Country getHighestGDPSpent()const ;
    Country getHighestLiteracyRate()const;



    friend ostream& operator<<(ostream& sout, const Continent& c);

private: 
    vector<Country> countriesInContinent;
    Country highestPopulation;
    Country highestGDPSpent;
    Country highestLiteracyRate;




};







#endif
