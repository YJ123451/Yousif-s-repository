#include <iostream>
#include <string>
#include "Person.h"
#include "package.h"
#include "OverNightPackage.h"
#include "checker.h"
using namespace std;

int main()
{
  int selection;
  cout << "1 2 or 3" << endl;
  cin >> selection;
  bool runner = true;
  while(runner)
    {
    switch(selection)
      {
        case 1:
          cout << "one" << endl;
          break;
        case 2:
          cout << "two" << endl;
          break;  
        case 3:
          cout << "Goodbye!" << endl;
          runner = false;
          break;
        default:
        cout << "Enter Valid" << endl;
      }
        cin >> selection;
    }
  return 0;
}
