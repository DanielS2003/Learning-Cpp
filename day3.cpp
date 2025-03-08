#include <iostream>
#include <ctime>

void motivation(std::string name);
double square(double length);

int main() {
    std::string name;
    while(name.empty()){
        std::cout <<"Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout<< "Hello " << name << '\n';

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number<0);

    std::cout << "The number is " << number << '\n';

    std::cin.clear(); 

    for(int i = 1; i <= 2; i++){
        std::cout << "I'm learning C++" << '\n';
    }

    for(int j = 1; j <= 3; j++) {
        if(j==2){
            continue;
        }
        std::cout << j << '\n';

    }

    motivation(name);

    srand(time(NULL));
    int length=(rand() % 6) +1;

    double area=square(length);
    std::cout << "The area of a square with side length " << length << " is "<< area << '\n';

    return 0;
}

void motivation (std::string name){
    std::cout << name << " is learning to code.\n";
    std::cout << "I'm making daily progress, I won't stop.\n";
    std::cout << "If I keep going, I'll be great at programming soon.\n";
}

double square(double length) {
    double result=length*length;
    return result;
}

/*notes
useful string methods
var.length() gives length of desired string
var.empty() returns boolean value whether the string is empty
var.clear() clears the string
var.append(newstring) appends newstring to the old
var.at() returns the character at the desired position
var.insert(index, desired characters) inserts desired characters at the index
var.find() finds desired objects in string
var.erase(start, end) erases from start to end indexes
*/

/* do while loop = do some code then repeat if condition is true */

/*break=break from loop
continue=skip current iteration*/

/*returns a value back to the spot where 
you called the encompassing function*/

/*an overloaded function is a function that is used more than once
ex.
void bakePizza (){}
and
void bakePizza (std::string topping){}
are both valid but if you didn't input a topping it would resort to 
using the first*/

/*local variable = declared inside a function or block
global variable = declared outside all functions*/