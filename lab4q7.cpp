// first include nthge library
#include <iostream>
#include <math.h>
using namespace std;
// write the main function
int main(){
// declaring the data types
float side, area;
cout<< "Enter the side of the equilateral triangle" <<endl;
cin>> side;
// displaying the values
area = (sqrt(3)/4)*side*side;
cout<< "The side of the equilateral triangle" <<endl;
cout<< area <<endl;
return 0;
}
