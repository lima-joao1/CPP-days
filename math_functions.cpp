#include <iostream>
#include <cmath> // every other function used here but min/max belong to this headerfile


int main(){

    double a = 3.14;
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); // function that shows the highest of two numbers (4)
    
    z = std::min(x, y);   // function that shows the smallest of two numbers (3)
    
    z = pow(2,3); // 2 to the power of 3 (8)    
    
    z = sqrt(9); // the square root of 9 (3)
    
    z = abs(-3); // absolute value of -3 (3)
    
    z = round(a); // rounds it to the nearest integer
    
    z = ceil(a);  // rounds it to the immediate highest integer
    
    z = floor(a); // rounds it to the immediate smallest integer

    
    std::cout << z; 

    return 0;
} 