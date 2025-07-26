#include <iostream>

// foreach loop = loop that eases the traversal over  
//                an iterable data set
//                with an usual for you can go forwards, backwards or even change the pace of the iteration;
//                with foreach loop you can only go from the beginning until the end! it's less flexible

int main(){

    std::string students[] ={"Spongebob", "Patrick", "Squidward"};
    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n'; 
    }

    for(std::string student : students){
        std::cout << student << '\n';
    }

    // We first add the datatype of the array within the parenthesis (std::string)
    // Then we create a name for the current element we are on. Since we are on an array of students, let's 
    // name the current element as student, then we add colon :, then the name of the iterable data set, which is the array
    // Then we display whatever the current element is, which was named student 
    return 0;
}

