#ifndef OVERNIGHT_H
#define OVERNIGHT_H
#include "Person.h"
#include "package.h"
class OverNightPackage: public Package
{
private:
const double package_fee = 25.0;
public:
OverNightPackage();
OverNightPackage(Person s, Person r, double w, double cpo);
//double getFee() const;
//void setFee(double pfee);
virtual double calculateCost() const;
virtual ~OverNightPackage(){}
};
#endif