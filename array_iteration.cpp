#include <iostream>

int main(){

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << students[0] << '\n';
    std::cout << students[1] << '\n';
    std::cout << students[2] << '\n';
    
    // In order to display every elements of an array, you don't need to write a line for each element;
    // You simply use a for/while loop

    std::cout << sizeof(students);
    std::cout << sizeof(students[0]);

    for(int i = 0; i < sizeof(students) / sizeof(std::string); i++){ // Began with i == 0 and it works until i == 2; the indices of the elements of students; also, i < 3 because 3 is the length of students
        std::cout << students[i] << '\n';                  // Changed i < 3 to i < sizeof(students) / sizeof(std::string). The size of the array divided by how much each string weighs on it naturally gives the amount of elements in it; could use sizeof("Spongebob") instead of expliciting that it's the size of a string 
    }                                                      // 32 bytes each string



    return 0;
} 

int main(){

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades) / sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}