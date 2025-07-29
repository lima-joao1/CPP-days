#include <iostream>

// 2d array = {array1, array2, array3}; can represent matrices 

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}}; 
                            
    // Two sets of square brackets; the first one is for the number of rows and the second, columns
    // When initializing a 2d array, you don't necessarily need to insert the number of rows, but you do for columns

    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << "\n";
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << "\n";
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << "\n";
                                 
    return 0;
} 

// Using nested loop to print the elements 

int main(){

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"}, 
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}}; 
                            
    // Two sets of square brackets; the first one is for the number of rows and the second, columns
    // When initializing a 2d array, you don't necessarily need to insert the number of rows, but you do for columns

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++)
            std::cout << cars[i][j] << " ";
        std::cout << std::endl;
    }   
    
    return 0;
}
