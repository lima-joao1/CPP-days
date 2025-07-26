#include <iostream>

// name.length() gets you the length of a string

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    if(name.length() > 12){
        std::cout << "Your name can't be over twelve characters long.";
    }
    else{
        std::cout << "Welcome to the site, " << name;
    }

    return 0;
}

// name.empty() returns whether the string is empty or not; boolean value

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    if(name.empty()){
        std::cout << "You didn't enter your name.";
    }
    else{
        std::cout << "Hello, " << name;
    }

    return 0;
}

// Erases the value in the variable name

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    name.clear(); 
    std::cout << "Hello, " << name;

    return 0;
}

// Within the parenthesis you can add another string to be added to name 

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    name.append("@gmail.com"); 
    std::cout << "Your username is now " << name;

    return 0;
}


// Prints the character index 0 within string name

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    std::cout << name.at(0);  

    return 0;
}

// You can add a character at a given position:

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    name.insert(0, "@"); // (index, thing to insert)
    std::cout << name;

    // Adds @ to index zero in the name string, pushing to the next indexes the remainder of the string

    return 0;
}

// You can find a certain character in a string:

int main(){

    std::string name;

    std::cout <<"Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    std::cout << name.find(' '); // Gives you the position of the first space!

    return 0;
}

// You can erase a portion of a string:

int main(){

    std::string name;
   
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // reads until a newline character

    name.erase(0, 3); // Erases the first three characters (in indexes 0, 1, 2); beginning index, ending index; not inclusive though for the ending 
    std::cout << name; 

    return 0;
}