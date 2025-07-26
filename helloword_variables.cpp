#include <iostream>

int main(){

    int x; // declaration
    x = 5; //assignment

    std::cout << x;

    return 0;

    
}



// int x -> em C++ você precisa dizer qual o tipo de dado que está armazenando; ex.: se é inteiro, string, float, etc...

int main(){
    
    int x = 5;

    std::cout << x;
    return 0;
}

// Em casos que não se sabe o que vai ser assigned a uma variável, podes assignar depois,
// mas nesse exemplo, como já sabe que x = 5, faz numa linha só

int main(){
    int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    return 0;
}


int main(){
    //integer int (whole number), if you use a float and the data type is float, it 
    //ignores the decimal part; it's truncated
    int age = 24;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << std::endl;

    // stores single character; use quotation ' ', if you use more than one, it'll only
    // display the latter 
    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    
    std::cout << initial << '\n';

    // boolean (true of false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    // string (objects that represent a sequence of text)
    std::string name = "João";
    std::string day = "Thursday";
    std::string food = "Pizza";
    std::string address = "São Pedro";

    std::cout << name << std::endl;

    std::cout << "Hello, " << name << '\n'; 
    std::cout << "I know that you are " << age << " years old. LOL! Old as fuck.";


    return 0;
}