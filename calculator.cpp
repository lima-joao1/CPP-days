#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********* CALCULATOR *********\n";

    std::cout << "Type the operation you wish to do (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "The result of the operation is " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "The result of the operation is " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "The result of the operation is " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "The result of the operation is " << result << std::endl;

            break;
        default:
            std::cout << "You didn't insert a proper operation." << std::endl; 
    }
    
    std::cout << "******************************";

    return 0;
}