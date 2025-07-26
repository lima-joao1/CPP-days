#include <iostream>

// OBS.: REASSISTIR AS AULAS DE USER DEFINED FUNCTION E RETURN! 
// CONTEÚDO COMPLICADO XD 


double square(double length);
double cube(double length);

int main(){

    // return = return a value back to the spot
    //          where you called the encompassing function

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length){
    double result = length * length; // temporary variable because it's inside a secondary function I think
    return result;
}

// Since we are returning a value, we need to change the keyword void to match the datatype of what we are returning;
// in this case, double!

double cube(double length){
    double result = length * length * length;
    return result;
} 

// ANOTHER EXAMPLE WITH BOOLEAN VALUES:
// ADD USER'S FIRST AND LAST NAME AND CREATE A NEW STRING FULL NAME

std::string concatStrings(std::string string1, std::string string2);


int main(){

    std::string firstName = "Robert";
    std::string lastName = "Downey";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello, " << fullName;

    return 0;
}


std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2; // returns string1 whitespace string2 
}


// Below is an example that I've created!

int wsIndexFinder(std::string thing);

int main(){

    std::string string = "Namc Opara";
    int index = wsIndexFinder(string);

    std::cout << "In the string " << string << ", the first whitespace is in the index " << index;

    return 0;
}

int wsIndexFinder(std::string thing){
    return thing.find(' ');
}