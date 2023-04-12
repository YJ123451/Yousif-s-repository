#include <iostream>
#include <cstdlib>
#include "package.h"

using namespace std;


Package::Package(Person s, Person r, double w, double cpo)
{
   sender = s; 
   receiver = r;
   setWeight(w);
   setCostPerOunce(cpo);
}

void Package::setWeight(double w)
{
    if (w > 0)
        weight = w;
    else
        exit(EXIT_FAILURE);
}

void Package::setCostPerOunce(double cpo)
{
    if (cpo > 0)
        cost_per_ounce = cpo;
    else
        exit(EXIT_FAILURE);
}
double Package::calculateCost() const
{
    return weight * cost_per_ounce;

}