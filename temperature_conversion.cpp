#include <iostream>

// Below is my try all by myself

int main(){

    double temp; // celsius
    double converted_temp; // fahrenheit

    std::cout << "Enter the temperature (Celsius): ";
    std::cin >> temp;

    converted_temp = (9.0 / 5) * (temp) + 32; // 9/5 == 1 because it's an integer division
                                          // to fix it you'd have to write at least one of the numbers as a floating point
                                          // and the other value will be considered double too, given that it has higher 
                                          // precision so 5 is considered double too in this case

    std::cout << temp << " Celsius degrees" << " equals " << converted_temp << " Fahrenheit.";

    return 0;
} 

// Below is Bro Code's work

int main(){

    double temp;
    char unit; // select between C or F

    std::cout << "***** Temperature conversion ******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout<< "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;  // here he didn't even create another variable to store the result; the first
                                   // variable was reused 
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "You entered an invalid temperature unit.\n";
    }

    std::cout << "*************************************";

    return 0;
}