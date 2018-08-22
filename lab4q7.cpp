// first include nthge library
#include <iostream>
#include <math.h>
using namespace std;
// write the main function
int main(){
float side, area;
cout<< "Enter the side of the equilateral triangle" <<endl;
cin>> side;
area = (sqrt(3)/4)*side*side;
cout<< "The side of the equilateral triangle" <<endl;
cout<< area <<endl;
return 0;
}
