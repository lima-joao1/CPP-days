#include <iostream>

// You can write up to three statements: an index, sort of counter; a condition for it to happen; counter incremention/decremetion

// Below, we created a counter called i (for index), it'll run as long as i <= 3, and it increments one unit per run (i++)

int main(){

    for(int i = 1; i <= 3; i++){
        std::cout << "Happy New Year!\n"; // This code should be repeated 3 times!
    }
    
    return 0;
} 

// Counting up to 10 and then saying happy new year

int main(){

    for(int i = 1; i <= 10; i++){
        std::cout << i << '\n';
    }

    std::cout << "HAPPY NEW YEAR!\n";


    return 0;
}

// Incrementing 2 by 2:

int main(){

    for(int i = 1; i <= 10; i+=2){
        std::cout << i << '\n';
    }
    std::cout << "HAPPY NEW YEAR!";

    return 0;
} 

int main(){

    int students;
    std::string name;

    std::cout << "Type the amount of students: ";
    std::cin >> students;

    for(int i = 1; i <= students; i++){
        std::cout << "Type the name of a student: ";
        std::getline(std::cin >> std::ws, name);
        std::cout << "Your student of index " << i << " is " << name << '\n';
    }

    return 0;
}