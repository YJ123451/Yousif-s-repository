#include "Person.h"
#include "package.h"
#include "TwoDay.h"
#include "iostream"

TwoDayShipping::TwoDayShipping(Person s, Person r, double w, double cpo):Package(s,r,w,cpo){};

double TwoDayShipping::calculateCost() const
{
  return (weight * cost_per_ounce) + package_fee;
}
