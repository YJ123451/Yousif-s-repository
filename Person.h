#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
private:
    string fname, lname;
    string address, city;
    int zipcode;
public:
    Person() {}
    Person(string fn, string ln, string a, string c, int z) {fname = fn; lname = ln; address = a; city =c; zipcode =z;}
    string getFirstName() const;
    string getLastName() const;
    string getAddress() const ;
    string getCity() const ;
    int getZip() const;
    void setFirstName(string fn);
    void setLastName(string ln);
    void setAddress(string a);
    void setCity(string c);
    void setZip(int z);
    ~Person() {}

};
#endif