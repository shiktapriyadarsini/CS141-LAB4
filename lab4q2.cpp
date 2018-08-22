// first include the library
#include <iostream>
using namespace std;
// write the main function
int main(){
// declaring the data type
float cel, fah; 
cout<< "Enter the value of celsius" <<endl;
cin>> cel;
// displaying the values
cout<< "Temperature in celcius" <<endl;
cout<< cel <<endl;
fah = (cel * 5.0) / 9.0 + 32;
cout<< "Conversion of Celsius to Fahrenheit" <<endl;
cout<< fah <<endl;
return 0;
}



