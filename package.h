#ifndef PACKAGE_H
#define PACKAGE_H

#include "Person.h"

class Package
{
protected:
    Person sender, receiver;
    double weight;
    double cost_per_ounce;
public:
    Package() { cost_per_ounce = 0.0; }
    Package(Person s, Person r, double w, double cpo);
    Person getSender() const { return sender; }
    Person getReceiver() const { return receiver; }
    double getWeight() const {return weight; }
    double getCostPerOunce() const { return cost_per_ounce; }
    void setSender(Person s) { sender = s; }
    void setReceiver(Person r) {receiver = r; }
    void setWeight(double w);
    void setCostPerOunce(double cpo);
    virtual double calculateCost() const;
    virtual ~Package() {}
};

#endif