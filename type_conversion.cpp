/*type conversion =  conversion ofa value of one data type to another
                     implicit = automatic
                     explicit = precede value with new data type (int) */

#include <iostream>

int main(){

    int x = 3.14;
    std::cout << x; // Implicitly converts x to integer because x is an int even 
                    // though you assined 3.14 to it beforehand; if it were double,
                    // it'd print 3.14 normally.

    return 0;
}


int main(){

    double x = (int) 3.14; // x is assigned as double but you change its type afterwards;
                           // that is explicit type conversion
    std::cout << x;

    return 0;
}


int main(){

    char x = 100;
    std::cout << x;   // 100 represents  the character 'd' in the ascii table, and that is what is printed;
    return 0;
}

int main(){
    
    std::cout << (char) 100; // prints 100 explicitly cast as a character (which is 'd')!!
    return 0;
}


int main(){

    int correct = 8;
    int questions = 10;
    double score = (double) correct / questions * 100; 

    // integer division will follow as: 8/10 = 0, it truncates the decimal part... therefore you'd
    // have explicitly converting both correct and questions variables to double to be a solution to the problem
    // at first I converted both to double but apparently you'd only need to convert one of them
    // because if one of the operands is double, the result will be a double;
    // in the case above, questions becomes double implicitly;
    // c++ converts the other operand to match the higher-precision type. 

    std::cout << "You have scored " << score << " %.";


    return 0;
}