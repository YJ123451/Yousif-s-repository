#include "OverNightPackage.h"
#include "package.h"
#include "Person.h"
#include <iostream>
#include <cstdlib>
using namespace std;
OverNightPackage::OverNightPackage(Person s, Person r, double w, double cpo):Package(s,r,w,cpo){};

double OverNightPackage::calculateCost() const
{
  cout << "This is the cost for your Overnight Package: $" <<endl;
  return (weight * cost_per_ounce) + package_fee;
}