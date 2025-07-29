#include <iostream>

int main(){

    std::string questions[] = {"1. What year was C++ created? ",
                               "2. Who invented C++? ",
                               "3. What is the precedessor of C++? ",
                               "4. Is the Earth flat? "};

    std::string options[][4] = {{"A. 1969 ", "B. 1975 ", "C. 1985 ", "D. 1989"},
                               {"A. Guido van Rossum ", "B. Bjarne Stroustrup ", "C. John Carmack ", "D. Mark Zuckerberg "},
                               {"A. C ", "B. C+ ", "C. C-- ", "D. B++"},
                               {"A. yes ", "B. no ", "C. sometimes ", "D. maybe"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions) / sizeof(questions[0]); // Amount of questions 
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << questions[i] << std::endl;
        for(int j = 0; j < sizeof(options[i]) / sizeof(options[0][0]); j++){
            std::cout << options[i][j] << std::endl;
        }
        std::cout << "Type your answer: ";
        std::cin >> guess;
        guess = toupper(guess); // In case the user types lowercase, it turns the guess variable to uppercase 

        if(guess == answerKey[i]){
            score += 1;
            std::cout << "Correct answer! Your score is now " << score << std::endl << std::endl;     
        }
        else{
            std::cout << "Wrong answer." << std::endl;
            std::cout << "Answer: " << answerKey[i] << std::endl << std::endl;
        }
    }   

    std::cout << "Game finished! You scored " << score << "/4";

    return 0;
}