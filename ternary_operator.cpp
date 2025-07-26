#include <iostream>

// ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

// Below is a code using if/else statements

int main(){

    int grade = 75;

    if(grade >= 60){
        std::cout << "You pass!";
    }
    else{
        std::cout << "You fail";
    }
    
    return 0;
}

// Below is the same code written using the ternary operator:

int main(){

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    return 0;
}

// Get rid of the if statement.
// Add a question mark to the condition that was within ().
// Write an expression to be read when said condition is true.
// Add a colon : and then whatever is after the colon will be read when said condition is false
// ----------------------------------------

// Below is another example to check whether a number is even or not

int main(){

    int number = 9;

    number % 2 == 0 ? std::cout << "The number " << number << " is even." : std::cout << "The number " << number << " is odd.";
    // OBS IMPORTANTE:
    // NÃO PRECISARIA FAZER % 2 == 0, APENAS number % 2, pois ser igual a zero corresponde
    // A SER VERDADEIRO E SER IGUAL A 1 SIGNIFICA QUE É FALSO!
    // PARECE MEIO DOIDO MAS É REAL

    return 0;
}

// One last example 

int main(){

    bool hungry = true;
    
    // hungry == true ?
    hungry ? std::cout << "You are hungry!" : std::cout << "You are full!";

    // another way to write the same line above:

    std::cout << (hungry ? "You are hungry!" : "You are full!");

    // The difference is that you only write std::cout once and the code is shorter
    // It's a better way nevertheless

    return 0;
} 

int main(){

    char genre;

    std::cout << "What are you? (M/F): ";
    std::cin >> genre;

    genre == 'M' ? std::cout << "You are a male." << '\n' : std::cout << "You are a female." << '\n';
    std::cout << (genre == 'M' ? "You are a male.": "You are a female.");
    return 0;
}



int main(){

    bool thirsty = false;
    thirsty ? std::cout << "You are thirsty!" << std::endl : std::cout << "You've had your fill already." << '\n';
    std::cout << (thirsty ? "You are thirsty!" : "You are not thirsty.");
    
    return 0;
}

// O VALOR BOOLEANO 0 É FALSO E 1 É VERDADEIRO. EM C++, NO RETURN,
// 0 É SUCESSO E 1 (qualquer outro valor) É ABNORMAL TERMINATION.