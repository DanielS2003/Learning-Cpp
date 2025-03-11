#include <iostream>

void walk(int steps);

enum day {monday=1,tuesday=2, wednesday=3, 
            thursday=4, friday=5, saturday=6, sunday=7};

template <typename T, typename U>
U max(T x, U y){
    return (x > y) ? x : y;
}

struct student {
    std::string name;
    double gpa;
    bool enrolled;
};

void printstudent(student student);

int main () {

    std::string *dogs = NULL;
    int size;

    std::cout <<"How many dogs do you own?: ";
    std::cin >> size;

    dogs = new std::string[size];

    for(int i=0; i<size; i++){
        std::cout << "What breeds do you own?(one at a time): ";
        std::cin >> dogs[i];
    }
    for(int i = 0; i < size; i++){
        std::cout << "You own a: "<< dogs[i] << '\n';
    }

    walk(3);

    std::cout << max(20,17.76) << '\n';

    student student1;
    student1.name="Daniel";
    student1.gpa=3.63;
    student1.enrolled=true;

    printstudent(student1);

    day today=tuesday;

    switch (today){
        case monday: std::cout<< "It is monday\n";
                        break;
        case tuesday: std::cout<< "It is tuesday\n";
                        break;
        case wednesday: std::cout<< "It is wednesday\n";
                        break;
        case thursday: std::cout<< "It is thursday\n";
                        break;
        case friday: std::cout<< "It is friday\n";
                        break;
        case saturday: std::cout<< "It is saturday\n";
                        break;
        case sunday: std::cout<< "It is sunday\n";
                        break;
    }

    return 0;
}

void walk(int steps){
    if(steps > 0){
        std::cout << "You took a step.\n";
        walk(steps-1);
    }
}

void printstudent(student student){
    std::cout << student.name << '\n';
    std::cout << student.gpa << '\n';
    std::cout << student.enrolled << '\n';
}

/*notes
dynamic memory= memory allocated after the program is compiled and running
use the 'new' operator to allocate memory in the heap rather than stack
memory is arranged from top to bottom like this: heap, stack, global/static, code
recursion= a programming technique where a function invokes itself from within
to break a complex concept into small repeatable steps
It results in less code but uses more memory and is slower
funtion template= description of what a function looks like
used to generate overloaded functions using different data types
struct= a structure that group related variables under one name (int, string, char...)
elements in the struct are known as members 
access with . = "Class Member Access Operator"
enum=user defined data type that consists of paired named integer
constant, use in case of a set of options*/