#include <iostream>

// arithmetic operators = return the result of a specific
//                        arithmetic operation (+ - * /)

/* //int main(){
    int students = 20;
    
    //students = students + 1;
    //students += 1;
    //students++;  //soma 1 a students

    //students = students - 1;
    //students -= 1;
    //students --;

    //students = students * 2;
    //students *= 2;

    //students = students / 2;
    //students /= 2;

    //students /= 3; // prints 6 if students is an integer, it is truncated (loses the
                   // decimal part); if students is double it becomes a decimal number 

    int remainder = students % 3;
    std::cout << remainder;


    return 0;
}
 */
int main(){

    // order of resolution:
    // parenthesis
    // multiplication & division
    // addition & subtraction

    int students = 6 - 5 + 4 * 3 / 2;
    std::cout << students;

    return 0;
}