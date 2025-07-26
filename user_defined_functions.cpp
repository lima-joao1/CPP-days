#include <iostream>

void happyBirthday(std::string name, int age); // Declared happyBirthday() function

int main(){

    // function = a block of reusable code
    
    std::string name = "Cancian";
    int age = 21;

    happyBirthday(name, age); // Calls (invokes) the user defined functions 

    return 0;
}

// To begin the function, we call the main() function; we can make another
// function before it to sing happy birthday!

// It is more usual (for readability) to declare functions after the main() function, but the code is read top-down;
// Therefore, it'll read main() before acknowledging happyBirthday() and the script won't compile;
// To overcome this problem, you can declare a function before the main() function and after it 
// you define the function

void happyBirthday(std::string name, int age){ // void nome_da_função
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are now " << age << " years old.";

    // It is void because it can't return a value
    // void function: performs an action but returns nothing 
}

// Each function is a house; yours is main() and the other functions are your neighbors; functions
// can't see what is going on inside other functions;
// You need to make the function happyBirthday() be aware of the variable name, therefore,
// you insert the variable within happyBirthday(name).
// To match the parameter used in the main function, you need to set up a matching parameter
// in the defined function void happyBirthday(std::string name) (you also have to add the parameter)
// into the declaration of the function at the top

// The parameter used in the user definited functions don't necessarily need to be the same word as 
// original variable name

// I want to pass the age variable to the function too, so I write it as an additional argument within the main function