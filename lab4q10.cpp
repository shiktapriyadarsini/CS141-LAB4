//first include the library
#include <iostream>
#include <math.h>
using namespace std;
// write the main function
int main(){
double P, R, T, CI;
cout<< "Enter the Principle" <<endl;
cin>> P;
cout<< "Enter the Rate" <<endl;
cin>> R;
cout<< "Enter the Time" <<endl;
cin>> T;
CI = P*pow((1+R/100),T);
cout<< "Compound Interest is" <<endl;
cout<< CI <<endl;
return 0;
}
