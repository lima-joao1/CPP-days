#include <iostream>

// break = break out of a loop
// continue = skip current iteration

int main(){

    for (int i = 1; i <= 20; i++){
        if (i == 13){
            continue;     // Skips the remainder of the block for for when i == 13 ;)
        }
        std::cout << i << std::endl;
    }


    return 0;
}