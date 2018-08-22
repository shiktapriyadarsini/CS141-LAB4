// first include the library
#include <iostream>
using namespace std;
// write the main function
int main(){
// declaring the data types
double sub1, sub2, sub3, sub4, sub5, total, avg, percent;
cout<< "enter the marks of sub1" <<endl;
cin>> sub1;
cout<< "enter the marks of sub2" <<endl;
cin>> sub2;
cout<< "enter the marks of sub3" <<endl;
cin>> sub3;
cout<< "enter the marks of sub4" <<endl;
cin>> sub4;
cout<< "enter the marks of sub5" <<endl;
cin>> sub5;
cout<< "The marks of the five subjects" <<endl;
cout<< sub1 <<endl;
cout<< sub2 <<endl;
cout<< sub3 <<endl;
cout<< sub4 <<endl;
cout<< sub5 <<endl;
// displaying the values
total = sub1+sub2+sub3+sub4+sub5;
avg = (sub1+sub2+sub3+sub4+sub5)/5;
percent = ((sub1+sub2+sub3+sub4+sub5)/5)*100;
cout<< "Total of the five subjects" <<endl;
cout<< total <<endl;
cout<< "Average of the five subjects" <<endl;
cout<< avg <<endl;
cout<< "Percentage of the five subjects" <<endl;
cout<< percent <<endl;
return 0;
}
