#include <iostream>
#include <cmath>

// Create a function to find the sum of the prices!

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75.00, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size); // To pass an array to a function you only use the array name as the parameter; no brackets!

    std::cout << "$ " << total << '\n';

    return 0;
}

double getTotal(double prices[], int size){ // When you define a function you need to include the brackets on the array name
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}

// When we pass an array to a function it decays to being a POINTER
// It points to the address where the array begins. The function has no idea of how big the array is.
// So you cannot use sizeof() to get the amount of elements in the array when you pass it to the function.
// To fix this, we can explicitly say what the size of the array is.
// I haven't really understood why, but apparently I can't use foreach for when dealing with array to function situations


// ASSIGNMENT

int getHighest(int values[], int size);

int main(){

    int values[] = {3, 5, 8, 14};
    const int size = sizeof(values) / sizeof(values[0]); // Consider using const int size if the array size won’t change. 
    const int highest = getHighest(values, size);
    std::cout << "The biggest value is " << highest;
    
    return 0;
}

int getHighest(int values[], int size){

    int highest = values[0];

    for(int i = 0; i < size; i++){
        highest = std::max(highest, values[i]);
    }

    return highest;
}