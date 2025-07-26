#include <iostream>

// array =  data structure that can hold multiple values
//          values are accessed by an index 
//          "kind of like a variable that holds multiple values"

// Arrays can only contain values of the same datatype


int main(){

    std::string car[] = {"Corvette", "Mustang", "Camry"}; // add [] at the end of the variable name and {} to the variable value 

    std::cout << car << '\n'; // prints the memory address of where the array car is located in the memory 

    std::cout << car[0] << '\n'; // prints Corvette because it's the index 0 in the array car 
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    return 0;
}

// In C++ you can change the values of a certain index too!

int main(){

    std::string cars[] = {"Corvette", "Mustang", "Camry"}; // add [] at the end of the variable name and {} to the variable value 

    cars[0] = 'Camaro';    

    std::cout << cars[0] << '\n'; // prints Corvette because it's the index 0 in the array car 
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}

int main(){

    std::string cars[3]; // You can first declare an array and only later on assign values to it, as long as you set a size to it
                         // This array will have a size of 3 because [3] after the variable name!!!
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << '\n'; // prints Corvette because it's the index 0 in the array car 
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}

int main(){

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3] << std::endl;

    return 0;
}