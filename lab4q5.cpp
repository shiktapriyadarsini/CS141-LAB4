// first include the library
#include <iostream>
using namespace std;
// write the main function
int main(){
// declaring the data types
float A1, A2, A3;
cout<< "Enter the angle A1" <<endl;
cin>> A1;
cout<< "Enter the angle A2" <<endl;
cin>> A2;
// displaying the values
A3 = 180-(A1+A2);
cout<< "Angle A1 is" << A1 <<endl;
cout<< "Angle A2 is" << A2 <<endl;
cout<< "Angle A3 is" << A3 <<endl;
return 0;
}
