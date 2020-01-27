//A program to test conditions
//1-22-2020 Dr_T Repl.it IDE
#include <iostream>
using namespace std;

int main()
 {
  //declare and initialize variables
  int ageOfDrT = 36; 
  int myAge = 26, inputAge = 0; //replace Dr_T's age with mine
  
  //if (decisions) processing
if(ageOfDrT > myAge)
{
  cout << "\nDr_T is older than I am." << endl;
}
else if(ageOfDrT < myAge)
{
  cout << "\nDr_T is younger than I am. " << endl;
}
else if(ageOfDrT == myAge)
{
  cout << "\nLa misma cosa. We are the same age.\n" << endl;

}
else //default clause - something went wrong
{
  cout << "\nError" << endl;
}
//Expand Program
cout << "Please input your age.\n";
cin >> inputAge;

if(inputAge > myAge)
{
  cout << "\nYou are older than I am." << endl;
}
else if(inputAge < myAge)
{
  cout << "\nYou are younger than I am. " << endl;
}
else if(inputAge == myAge)
{
  cout << "\nLa misma cosa. We are the same age.\n" << endl;

}

else //default clause - something went wrong
{
  cout << "\nError" << endl;
}

  return 0;
}