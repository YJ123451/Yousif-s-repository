#include "checker.h"
#include <iostream>
#include <string>
using namespace std;

string firstNameCheck()
{
  string firstName;
  cout << "Enter a First Name:" << endl;
  cin >> firstName;
  bool again = true;
  while(again)
  {
    try
    {
      if(firstName.size() > 1)
      {
        again = false;
        return firstName;
      }
      else
        throw firstName;  
    } 
    catch(string check)
      {
        cout << check << " is not a valid First Name" << endl;
        cout << "Please enter a valid first name:" << endl;
        cin >> firstName;
      }
  }
}
string lastNameCheck()
{
  string lastName;
  cout << "Enter a Last Name:" << endl;
  cin >> lastName;
  bool again = true;
  while(again)
  {
    try
    {
      if(lastName.size() > 1)
      {
        again = false;
        return lastName;
      }
      else
        throw lastName;  
    } 
    catch(string check)
      {
        cout << check << " is not a valid Last Name" << endl;
        cout << "Please enter a valid Last Name:" << endl;
        cin >> lastName;
      }
  }
}
string streetAddressCheck()
{
  string address;
  cout << "Please enter an address" << endl;
  getline(cin, address);
  bool again = true;
  while(again)
    {
      try
        {
          if(address.size() > 1)
          {
            again = false;
            return address;
          }
          else
            throw address;
        }
        catch(string check)
        {
          cout << "You entered an invalid address." << endl;
          cout << "Please enter a valid address:" << endl;
          getline(cin, address);
        }
    }
}
string cityCheck()
{
  string city;
  cout << "Enter a city:" << endl;
  cin >> city;
  bool again = true;
  while(again)
  {
    try
    {
      if(city.size() > 1)
      {
        again = false;
        return city;
      }
      else
        throw city;  
    } 
    catch(string check)
      {
        cout << check << " is not a valid City" << endl;
        cout << "Please enter a valid City:" << endl;
        cin >> city;
      }
  }
}
int zipCodeCheck()
{
  int zipCode;
  cout << "Enter a zipCode:" << endl;
  cin >> zipCode;
  bool again = true;
  while(again)
  {
    try
    {
      if(zipCode > 9999 && zipCode < 100000)
      {
        again = false;
        return zipCode;
      }
      else
        throw zipCode;  
    } 
    catch(int check)
      {
        cout << check << " is not a valid Zip Code" << endl;
        cout << "Please enter a valid Zip Code:" << endl;
        cin >> zipCode;
      }
  }
}