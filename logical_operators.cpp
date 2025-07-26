#include <iostream>

// && = and operator (checks if two conditions are true)
// || = or operator (checks if at least one of two conditions are true)
// ! = not operator (reverses the logical state of its operand)


int main(){

    int temperature;
    bool sunny = true;

    std::cout << "Enter the temperature (Celsius): ";
    std::cin >> temperature;

    // Below is an and operator example

    if(temperature > 0 && temperature < 30){
        std::cout << "The temperature is good!" << std::endl;
    }
    else{
        std::cout << "The temperature is bad!" << std::endl;
    }

    // Below is an or operator example

    if(temperature < 0 || temperature >= 30 ){
        std::cout << "The temperature is bad!" << std::endl;
    }
    else{
        std::cout << "The temperature is good!" << std::endl;
    }

    // Below is an not operator example

    if(!sunny){ // it prints the else statement because sunny is true and !sunny is false
        std::cout << "It is cloudy outside!";
    }
    else{
        std::cout << "It is sunny outside!";
    }

    return 0;
} 

// Below is the assignment Bro Code told me to create by myself

int main(){

    bool tall = false;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 21){
        std::cout << "You can legally drink!" << std::endl;
    }
    else{
        std::cout << "You may not drink legally!" << std::endl;
    }

    if(!tall){
        std::cout << "You are tall!";
    }
    else{
        std::cout << "You are short!";
    }

    return 0;
}