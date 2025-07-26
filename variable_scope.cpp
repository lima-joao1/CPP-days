#include <iostream>

 // Local variables = declared inside a function or block {} (The ones inside the main function are local)
 // Global variables = declared outside of all functions! (Usually declared at the top of the program)

 // You can use the same variable name, as long as it is in different scopes!

int myNum = 3; // Global variable

void printNum();

int main(){



    printNum();
    std::cout << ::myNum; // Using double colon (scope resolution operator) makes you use the global version of the variable  

    return 0;
}

void printNum(){
    std::cout << myNum;
}