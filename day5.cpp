#include <iostream>

void swap(std::string &x, std::string &y);

int main() {

    std::string x="Labrador Retriever";
    std::string y="American Shepherd";

    swap(x,y);

    std::cout << "X: "<< x << '\n';
    std::cout << "Y: " << y << '\n';

    std::string name = "Plato";
    std::string *pname=&name;

    std::cout << "My dog's name is " << *pname << '\n';

    double *agepoint= nullptr;
    double age=14.67;

    agepoint = &age;
    if(agepoint==nullptr) {
        std::cout<< "Failed to assign new value to agepointer\n";
    }
    else{
        std::cout << "Address assigned\n";
    }


    return 0;
}

void swap(std::string &x, std::string &y) {
    std::string temp;
    temp=x;
    x=y;
    y=temp;
}

/*notes
& means address of and gives the location in memory where data is stored eg. std::cout << &name;
useful for the pass-by value and pass-by reference example with the swap function
usually it is better to pass by reference
* means dereference
pointer is a variable that stores the address of another variable

nullptr is a null pointer, a pointer that has no value
*/