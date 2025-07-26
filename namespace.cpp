#include <iostream>


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){

    // Namespace = provides a solution for preventing name conflicts 
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities (variable and anything placeable inside a namespace)
    //             as long as the namespaces are different.

    int x = 0; // não podes declarar outra variável x, tem que ter outro nome
               // a não ser que crie namespace!!

    std::cout << x << '\n'; 
    std::cout << first::x << std::endl; // usa o namespace de nome first 
    std::cout << second::x << std::endl;

    return 0;
}

// Se não falar qual namespace está usando, ele printa o x local, 0.


int main(){
    using namespace first;

    std::cout << x;
    std::cout << second::x;

    return 0;
}

// No main acima, x já vai receber o valor de x declarado no namespace first
// É como se virasse o local
// Ainda podes usar a syntax pra usar o namespace second ali dentro!
// OBS.: os dois pontos :: é o scope resolution operation; serve para acessar 
// muitas coisas...

int main(){
    using namespace std;

    string name = "João";

    cout << "Hello " << name;

    return 0;
}

// Idle line "using namespace std"; makes you not need to write std:: during declarations
// The problem is that you are using everything within "std", thus making it weigh a little
// Too much I believe. Instead, you could just say what you are going to use that is inside
// Std, just like the code below

int main(){
    using std::cout;
    using std::string;

    string name = "João";
    cout << "Hello " << name;

    return 0;
}