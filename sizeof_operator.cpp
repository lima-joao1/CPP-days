#include <iostream>

// sizeof() = determines the size in bytes of a:
//            variable, data type, class, objects, etc.  

int main(){

    std::string name = "Bruno Abreu";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(name) << " bytes\n"; // prints how many bytes the variable uses in memory based on its data type  
    std::cout << sizeof(grades) << " bytes\n"; // since char takes 1 byte, having 5 elements in the array will take 1 * 5 = 5 bytes
    std::cout << sizeof(grades) / sizeof(char) << " elements\n"; // the size of an array divided by the size of each element inside of the array gives how many elements there are

    std::cout << sizeof(students) / sizeof(std::string) << " students\n";

    return 0;
}