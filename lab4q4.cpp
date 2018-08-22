// first include the library
#include <iostream>
using namespace std;
// write the main function
int main(){
// declaring the data types
float days, weeks, years;
cout<< "Enter the number of days" <<endl;
cin>> days;
// displaying the values 
weeks = ((1/7)*days);
years = ((1/365)*days);
cout<< "Conversion of days to weeks" <<endl;
cout<< weeks <<endl;
cout<< "Conversion of days to years" <<endl;
cout<< years <<endl;
return 0;
}

