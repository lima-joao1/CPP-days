#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You chose: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);
    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    
    char player;
    
    std::cout << "ROCK-PAPER-SCISSORS GAME!\n";

    do{
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cout << "Enter your choice: ";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){
    
    srand(time(NULL));          // NEEDED TO GENERATE A RANDOM SEED SO I CAN USE THE RANDOM STUFF
    int num = (rand() % 3) + 1; // TO GENERATE RANDOM LETTER YOU NEED TO GENERATE NUMBERS AND ASSIGN EACH TO A LETTER 

    switch(num){
        case 1: 
            return 'r'; // No need to break here because you break out of a function when you return!
        case 2: 
            return 'p';
        case 3:
            return 's';
    }

    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "ROCK!\n"; break;
        case 'p': std::cout << "PAPER!\n"; break;
        case 's': std::cout << "SCISSORS!\n"; break;
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "TIE!";
                    }
                    else if(computer == 'p'){
                        std::cout << "COMPUTER WINS!";
                    }
                    else{
                        std::cout << "PLAYER WINS!";
                    }
                    break;
        case 'p':   if (computer == 'r'){
                        std::cout << "PLAYER WINS!";
                    }
                    else if(computer == 'p'){
                        std::cout << "TIE!";
                    }
                    else{
                        std::cout << "COMPUTER WINS!";
                    }
                    break;
        case 's':   if (computer == 'r'){
                        std::cout << "COMPUTER WINS!";
                    }
                    else if (computer == 'p'){
                        std::cout << "PLAYER WINS!";
                    }
                    else{
                        std::cout << "TIE!";
                    }
                    break;
        }
}