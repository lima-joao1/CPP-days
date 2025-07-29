#include <iostream>

// Pass by VALUE vs pass by REFERENCE

/* void swap(std::string cup1, std::string cup2); 
// You have to declare the function swap before main so that the compiler knows about
// its existence when it's invoked in the main function

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    
    return 0;
}

void swap(std::string cup1, std::string cup2){
    std::string temp;
    temp = cup1;
    cup1 = cup2;
    cup2 = temp;
} */

// The code as is above won't work. Values won't be switched because
// normally when we pass a variable to a function we are passing by VALUE
// When we invoke swap we are creating copies of the original values x and y.
// In the function, we are switching the values of the copies of x and y, and not
// x and y per se. <--- PASS BY VALUE!!!

// If I need to change the original values of this function, it's better to use
// PASS BY REFERENCE (as in a memory address) as shown below:

void swap(std::string &cup1, std::string &cup2); 

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    
    return 0;
}

void swap(std::string &cup1, std::string &cup2){
    std::string temp;
    temp = cup1;
    cup1 = cup2;
    cup2 = temp;
}