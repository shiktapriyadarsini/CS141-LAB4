//first include the library
#include <iostream>
using namespace std;
// write the main function
int main(){
// declaring the values
double P, T, R, SI;
cout<< "Enter Principal" <<endl;
cin>> P;
cout<< "Enter Time" <<endl;
cin>> T;
cout<< "Enter Rate" <<endl;
cin>> R;
// displaying the values
SI = (P*R*T)/100;
cout<< "Simple Interest is"<<endl;
cout<< SI;
return 0;
}


