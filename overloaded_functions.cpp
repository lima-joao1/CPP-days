#include <iostream>
// Functions can have the same name but their set of parameters must be different.
// The composition of a function name and its parameters are called a function's signature.

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza();                 // Here we use the first function
    bakePizza("pepperoni");      // Here we use the second function
    bakePizza("bacon", "corn");  // Here we use the third function

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza (std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}