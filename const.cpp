#include <iostream>


int main(){
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;  // A keyword aqui não deixa o valor ser alterado ao decorrer do código; previne acidentes.
    const double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << "The circumference is " << circumference << " units of length.";

    return 0;
}



int main(){
    const double PI = 3.14159;           // You only want to read them!!!
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;


    return 0;
}