#include <iostream>

int searchArray(int array[], int size, int element);

main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index; // In order to say where in the array a certain value is at
    int myNum;

    std::cout << "Enter a number (1-10): ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    
    if(index != -1){ // index != -1 means that said value is indeed within the array
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not in the array.";
    }
    
    
    return 0;
}

int searchArray(int array[], int size, int element){ // int array[], which is numbers[]; int element, which is the number we're looking for

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1; // If you don't find the number, you return -1. Tipically means that something wasn't found; sentinel value
} 

// Doing the same for an array of foods below!

int searchArray(std::string stuff[], int length, std::string choice);

int main(){

    std::string foods[] = {"Pizza", "Cake", "Soda", "Salad"};
    std::string myFood;
    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    
    std::cout << "Enter the name of the food: ";
    std::getline(std::cin, myFood); // No need to use >> std::ws because there was no cin pior to this one! It is CIN that leaves a newline character in the input buffer 

    
    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << myFood << " is at the index " << index;
    }
    else{
        std::cout << myFood << " is not in the array.";
    }

    return 0;
}

int searchArray(std::string stuff[], int length, std::string choice){

    for(int i = 0; i < length; i++){
        if(stuff[i] == choice){
            return i;            
        }
    }

    return -1;
}