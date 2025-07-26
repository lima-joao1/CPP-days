#include <iostream>
#include <ctime>

int main(){

    srand(time(0)); // I don't know why it's time(0) instead of time(NULL) this time (they do the same thing gpt said)
    int randNumber = (rand() % 5) + 1; // between 1 - 4

    switch(randNumber){
        case 1: std::cout << "You win a bumper sticker!\n";
            break;
        case 2: std::cout << "You win a t-shirt!\n";
            break;
        case 3: std::cout << "You win a free lunch!\n";
            break;
        case 4: std::cout << "You win a Dell Notebook!\n";
            break;
        case 5: std::cout << "You win a helicopter!\n";
            break;
        // No need for a case default here because it's a random number; the user won't have the chance to write an unvalid
    }

    return 0;
}