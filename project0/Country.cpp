
/****************************************************
** File: Country.cpp
** Project: CMSC 341 Project 0, Spring 2016
** Author: Michael Maduako
** Date: 2/13/16
** Section:
** E-mail: maduako1@umbc.edu
**
**  This file contains the country declaration file for Project 0.
** This file sets the country's name, population,
** GDPand litteracy rates depending on sex and age
**
*******************************************************/

#include "Country.h"

Country::Country()
{

}


void Country::setName(string name1)
{
    name = name1;
}


string Country::getName()const
{
    return name;
}

void Country::setPopulation(long pop1)
{
    population = pop1;
}

long Country::getPopulation()const 
{
    return population;
}

void Country::setLiteracyRate(float lit)
{
    literacyRate = lit;
}

float Country::getLiteracyRate()const
{
    if(literacyRate == 0) //when the literacy rate reads N/A 
      return -1;         // the value becomes -1
    else
      return literacyRate;
}

void Country::setPrimaryCompletionFemale(float fem)
{
    primaryCompletionFemale = fem;
}

float Country::getPrimaryCompletionFemale()const
{
    return primaryCompletionFemale;
}

void Country::setPrimaryCompletionMale(float male)
{
    primaryCompletionMale = male;
}

float Country::getPrimaryCompletionMale()const
{
    return primaryCompletionMale;
}

void Country::setPrimaryCompletionTotal(float tot)
{
    primaryCompletionTotal = tot;
}


float Country::getPrimaryCompletionTotal()const
{
    return primaryCompletionTotal;
}

void Country::setEducationGDPSpent(float gdp)
{
    educationGDPSpent = gdp;
}

float Country::getEducationGDPSpent()const
{
    return educationGDPSpent;
}

void Country::setYouthLitRateFem(float fem)
{
    youthLitRateFem = fem;
}

float Country::getYouthLitRateFem()const
{
    return youthLitRateFem;
}

void Country::setYouthLitRateMale(float male)
{
    youthLitRateMale = male;
}

float Country::getYouthLitRateMale()const
{
    return youthLitRateMale;
}
