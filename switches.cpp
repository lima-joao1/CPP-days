#include <iostream>

// switch = alternative to using many "else if" statements 
//          compare one value against matching cases.
//          Below is an example of what you don't want to do:

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    if(month == 1){
        std::cout << "It is January!";
    }
    else if(month == 2){
        std::cout << "It is February!";
    }
    else if(month == 3){
        std::cout << "It is March!";
    }
    else if(month == 4){
        std::cout << "It is April!";
    }
    else if(month == 5){
        std::cout << "It is May!";
    }
    else if(month == 6){
        std::cout << "It is June!";
    }
    else if(month == 7){
        std::cout << "It is July!";
    }
    else if(month == 8){
        std::cout << "It is August!";
    }
    else if(month == 9){
        std::cout << "It is September!";
    }
    else if(month == 10){
        std::cout << "It is October!";
    }
    else if(month == 11){
        std::cout << "It is November!";
    }
    else if (month == 12){
        std::cout << "It is December!";
    }
    else{
        std::cout << "You didn't enter a number between (1-12) :(";
    }

    return 0;
}

// Now, using switches you can avoid having to write this much useless stuff.
// Remember that a switch compares one same value (in this case, month) with
// a lot of possible options.

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){    // The parameter is the variable to be compared to multiple cases
        case 1:       // Checks if month == 1; below, you do things when month == 1. It checks if month exactly equals 1.
            std::cout << "It is January!";
            break;    // Break to break out of the switch. If you don't, it'll execute the next cases...
        case 2:
            std::cout << "It is February!";
            break;
        case 3:
            std::cout << "It is March!";
            break;
        case 4:
            std::cout << "It is April!";
            break;
        case 5:
            std::cout << "It is May!";
            break;
        case 6:
            std::cout << "It is June!";
            break;
        case 7:
            std::cout << "It is July!";
            break;
        case 8:
            std::cout << "It is August!";
            break;
        case 9:
            std::cout << "It is September!";
            break;
        case 10:
            std::cout << "It is October!";
            break;
        case 11:
            std::cout << "It is November!";
            break;
        case 12:
            std::cout << "It is December!";
            break;
        default:        // It works like that one last part on the previous code;
            std::cout << "Please enter in only numbers (1-12) "; 
                        // a standard procedure to be followed through in case month is different from the tried cases.
                        // Switch ends after default, so, no need to use break here.
    }

    return 0;
} 

// Using switches is more efficient and easier to read than multiple if & else if

// One last example following the same idea. 
// Display a custom message regarding the grade the user has.

int main(){

    char grade;

    std::cout << "Enter your grade (letter): ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You nailed it!";
            break;
        case 'B':
            std::cout << "You did well!";
            break;
        case 'C':
            std::cout << "You didn't do so great...";
            break;
        case 'D':
            std::cout << "Lmao very bad";
            break;
        case 'F':
            std::cout << "The worst of it all";
            break;
        default:
            std::cout << "Please only enter in a letter grade (A-F).";
    }


    return 0;
}
