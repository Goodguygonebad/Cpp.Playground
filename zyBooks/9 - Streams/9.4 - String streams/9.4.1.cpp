#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Write code that uses the input string stream inSS to read input data from string userInput, and updates variables userMonth, userDate, and userYear. Sample output if userinput is "Jan 12 1992":

  Month: Jan
  Date: 12
  Year: 1992
*/

int main() {
   string userInput = "Jan 12 1992";
   istringstream inSS(userInput);
   string userMonth;
   int userDate = 0;
   int userYear = 0;

   //Inserted code
   inSS >> userMonth;
   inSS >> userDate;
   inSS >> userYear;
  //inserted code ends

   cout << "Month: " << userMonth << endl
        << "Date: " << userDate << endl
        << "Year: " << userYear << endl;

   return 0;
}
