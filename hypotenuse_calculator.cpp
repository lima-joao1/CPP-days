#include <iostream>
#include <cmath> 

// The first solution is mine alone. The second is Bro Code's.

int main(){

    double a;
    double b;
    double h;

    std::cout << "Tell me the value of the the first leg: ";
    std::cin >> a;

    std::cout << "Tell me the value of the second leg: ";
    std::cin >> b;

    h = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The first leg has " << a << " cm." << std::endl;
    std::cout << "The second leg has " << b << " cm." << '\n';
    std::cout << "The hypotenuse of said triangle is " << h << " cm.";

    return 0;
}

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a+b);

    std::cout << "Side C:" << c;

    return 0;
}