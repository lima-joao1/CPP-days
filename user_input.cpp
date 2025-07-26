#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

// in C++, << is called the insertion operator because it "inserts" data into an output stream (like std::cout).
// >> is called the extraction operator because it "extracts" data from an input stream (like std::cin).

int main(){

    std::string name; // declared a string variable named name
    int age;

    std::cout << "What is your name?: "; // prints it to the user
    std::cin >> name; // stores to name whatever they type next
    std::cout << "Your name is " << name << std::endl;

    std::cout << "How old are you, " << name << "?" << '\n';
    std::cin >> age;
    std::cout << "Holy shit, " << age << " years old? You are hella old, " << name;

    return 0;
} 

int main(){

    // A problem here arises when you need someone's FULL name, since said string will most likely have
    // a space within it. If you tried to run it it'd get messy and wrong, but there is a function you
    // can use to fix that. GETLINE(). It keeps reading characters until it encounters a newline character '\n'
    // When you use std::cin >> name, it only reads input up to the first space.
    // If you enter "John Smith", name will be "John" and "Smith" will be left in the input
    // buffer. This is because >> stops reading at whitespace.

    std::string name;
    int age;

    std::cout << "What is your FULL name?: ";
    std::getline(std::cin, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}


int main(){

    // New problem here: if you have the age input before the name input, 
    // if you accept some user input with cin (as it is with age), 
    // followed by GETLINE, in the input buffer there is a newline character '\n'
    // which is read by std::getline(std::cin, name) and name becomes an empty string,
    // but you can fix it by adding >> std::ws to the name block; 
    // ws stands for whitespaces, it eliminates any new line characters or whitespaces
    // before any user input.

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;
    
    std::cout << "What is your FULL name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}

// std::cin >> reads input until it encounters a whitespace (space, tab, or newline).
// std::getline reads input until it encounters a newline character '\n', allowing spaces in the input.
// std::cin >> std::ws skips any leading whitespace (including newlines) before reading input with getline.