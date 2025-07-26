#include <iostream>

int main(){

    std::string name; // Name is an empty string if declared but not assigned anything to because of std::

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello, " << name;
    return 0;
} 

// My assignment below ;)

int main(){

    double eaten_kcal;
    double total_eaten;

    while(total_eaten < 2000){
        std::cout << "Enter how much kilo-calories you've just eaten: ";
        std::cin >> eaten_kcal;
        total_eaten += eaten_kcal;
        std::cout << "You have eaten a total of " << total_eaten << " so far.\n";
    }
    std::cout << "You are done eating for the day.";

    return 0;
}