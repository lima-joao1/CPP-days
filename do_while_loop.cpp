#include <iostream>

// do while loop = do some block of code first, 
//                 then repeat again if condition is true



int main(){

    int number; // The number was declared but nothing was assigned to it
                // Therefore it defaults to a certain value which is 0 for Bro Cde but was 32759 for me (likely from my VSCode settings)

    while(number < 0){ // since number == 32759, it skips the while loop
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }

    std::cout << "The number is " << number;

    return 0;
}

// Below is a bad solution for this problem: you simply add one instance of what is within the
// while loop at the very beginning of the code


int main(){

    int number;
    
    std::cout << "Enter a positive #: ";
    std::cin >> number;

    while(number < 0){ 
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }

    std::cout << "The number is " << number;

    return 0;
}


// Below is the proper solution without repeating those two lines of code by using do while loops:
// We need to run that block of code within the while loop once and then repeat it if that condition is true
// That is what do loop does!


int main(){

    int number;

    do{
        std::cout << "Type a positive #: ";
        std::cin >> number;
    }while(number < 0);

    // First it does whatever is within do {}, then checks for while (number < 0) and repeats the code within
    // do {} as long as the condition within while() is true!


    std::cout << "#: " << number;

    return 0;
}