#include <iostream>
#include <vector>

//Namespace allows for identically named things by putting them into separate containers
//example of namespace

namespace example{
    int x=10;
}

//typedef is a reserved keyword to create an additional name for another data type
typedef std::string text_t;
//or use "using"
using number_t=int;

int main(){
//this is a comment
/*this is a 
multiline comment
*/
    std::cout << "Hello world!" <<'\n';
    std::cout << "This is my first C++ program" <<'\n';
    int x = 13; //declaration and assignment
    int y = 6;
    int sum = x+y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum <<'\n';

    const double PI = 3.14159; //example of using constant and double together
    std::cout << example::x <<'\n';

    text_t food = "burger";
    std::cout <<food << std::endl;
    number_t z=-1;
    std::cout <<z <<'\n';
    z*=20;
    std::cout <<z <<'\n';
    return 0;
}
/*The following is review of labels for variables*/
/*
int stores whole numbers
double stores numbers with decimals
char stores single characters
bool is true or false
string is for objects that represent a sequence of text
const tells the compiler to prevent a variable from being changed
*/