#include <iostream>
#include <vector>

// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos



typedef std::vector<std::pair<std::string, int>> pairlist_t; // _t stands for type, usual to have it at the end of the alias  
       // Original datatype, really ugly       // All that stuff is now called pairlist, much easier to write

int main() {

    //std::vector<std::pair<std::string, int>> pairlist; Instead of writing that, you use what is in the next line
    pairlist_t pairlist;


    return 0;
}


// New, simpler example:

typedef std::string text_t; // instead of writing std::string every time you declare a string, you write text_t!!!
typedef int number_t;

int main() {
    text_t address = "São Pedro";
    number_t age = 31;


    std::cout << "I live in " << address << "." << std::endl;
    std::cout << "I am " << age << " years old.";


    return 0;
}

// typedef = reserved keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Use when there is a clear benefit
//           Replaced with 'using' (work better w/ templates)

using text_t = std::string;
using number_t = int;
using decimal_t = double;

int main(){

    text_t firstName = "Bro";
    number_t age = 21;
    decimal_t salary = 5800;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
    std::cout << "Payroll: " << salary << std::endl;

    return 0;
}