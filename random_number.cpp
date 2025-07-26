#include <iostream>
#include <ctime>

// pseudo-random = NOT truly random (there is no randomness in a computer)


int main(){

    srand(time(NULL)); // Its parameter is a seed, and it's usually used the current time as such (I didn't understand this part very well)

    int num = (rand() % 6) + 1;   // after % you add the range of numbers you'd like (You are doing rand() module 6; the
                                  // remainder of whatever rand() you have divided by 6)
                                  // the range here is from 0 to 5, because you can't get a remainder = 6 when you do module 6
                                  // therefore you can solve this problem by adding 1 to it
                                  // a die with 6 sides !!!
                                  
    int num2 = (rand() % 20) + 1; // a die with 20 sides !!!
    

    std::cout << num << std::endl;
    std::cout << num2;


        
    return 0;
}