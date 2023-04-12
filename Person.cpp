#include <iostream>
using namespace std;
#include "Person.h"
string Person::getFirstName() const{
  return fname;
}
string Person::getLastName() const{
  return lname;
}
string Person::getAddress() const{
  return address;
}
string Person::getCity() const{
  return city;
}
int Person::getZip() const{
  return zipcode;
}
void Person::setFirstName (string fn) {
  
  fname = fn;
}
void Person::setLastName(string ln) {
  lname = ln;
}
void Person::setAddress(string a) {
  address = a;
}
void Person::setCity(string c){
  city = c;
}
void Person::setZip(int z){
  zipcode = z;
}