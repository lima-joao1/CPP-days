#include <iostream>

// Below you count from 1 to 10, 3 times using nested loops

int main(){

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
        std::cout << j << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}

// Creating a rectangle with inputed rows and colums

int main(){

    int rows;
    int colums;
    char symbol;

    std::cout << "Rows amount: ";
    std::cin >> rows;

    std::cout << "Colums amount: ";
    std::cin >> colums;

    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= colums; j++){
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

    return 0;
}