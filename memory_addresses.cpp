#include <iostream>

int main(){

    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)
    // a variable's address changes every time you run the program
    // the address is in hexadecimal 

    std::string name = "Bruno";
    int age = 9;
    int toes = 10;
    bool student = true;

    std::cout << &toes << '\n';
    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    // A certain run of the program printed out the following and I converted it to decimal:
    // 0x36a35ffc60 = 234669210720
    // 0x36a35ffc5c = 234669210716 
    // 0x36a35ffc5b = 234669210715

    // They are like house numbers. Different data types take up more or less room than other data types.
    // If we look at the distance between the first (name variable) and the second (age variable)
    // That has a gap of 4 memory addresses but the gap between the second (age variable) and third (student variable)
    // Is of only 1 memory address, because booleans only take up 1 byte of memory.  
    // That is one of the reasons we use data types: we need to know how much memory we need to locate to fit a certain value.


    return 0;
}