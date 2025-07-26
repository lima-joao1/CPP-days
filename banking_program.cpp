#include <iostream>
#include <iomanip> // Needed to include decimal points to a value

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n"; 
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        std::cin.clear(); // Resets error flags when std::cin fails to interpret the input (i.e.: you type a character instead
                          // of an int 1-4).  If you don’t clear it, the stream stays in a broken state and won't read future inputs properly. 
                          // Clears any error flags that might have been set if the user entered invalid input (e.g., letters instead of numbers).
                          // Without this, std::cin would remain in a failed state and ignore further input attempts.

        fflush(stdin);    // Clears the input buffer. When you hit enter after std::cin >> choice, a newline character goes to the input buffer
                          // so this function clears it and makes the program not crash when dealt with choices that are strings
                          // Attempts to flush the input buffer by discarding any leftover characters (like '\n') remaining from previous input.
        switch(choice){
            case 1: showBalance(balance);
                    break;
             case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break; 
            case 4: std::cout << "Program finished!\n";
                    break;
            default: std::cout << "Invalid choice.\n";
 
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "You have a total of U$ " << std::setprecision(2) << std::fixed << balance << std::endl;
               // Above is the way you make the balance value have 2 decimal places after the decimal point (don't forget to include iomainip)
}

double deposit(){
    
    double amount = 0;
    
    std::cout << "Enter the amount to de deposited into the account: ";
    std::cin >> amount;
    
    if(amount > 0){
        std::cout << "You have deposited U$ " << amount << std::endl;
    
        return amount;
    }
    else{
        std::cout << "That's not a valid amount.\n";
        return 0;
    }        
}

double withdraw(double balance){
    
    double amount;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient funds.\n";

        return 0;
    }
    else if(amount < 0){
        std::cout << "That is not a valid amount.\n";
        return 0;
    }
    else{
        std::cout << "You have withdrawn U$ " << amount << std::endl;
        return amount;
    }

}
