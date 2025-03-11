#include <iostream>

class human{
    public:
        std::string name;
        int age;
        std::string subject;

    human(std::string x, int y, std::string z){
        name=x;
        age=y;
        subject=z;
    }  
};

class dinner{
    public:
        bool hungry=true;
        std::string type;
        std::string food;
    void eat(){
        std::cout << "I am eating the dinner I cooked.\n";
    }

    dinner(){
    }

    dinner(std::string x){
        type=x;
    }
    dinner(std::string x, std::string y){
        type=x;
        food=y;
    }
};

class cooking : public dinner{
    public:

    void prep(){
        std::cout << "I am preparing the ingredients.\n";
    }
};

class range{
    private:
        int temp=70;
    public:

    int gettemp(){
        return temp;
    }
    void settemp(int x){
        if(x < 0){
            this->temp=0;
        }
        else if (x >=70){
            temp=x;
        }

    }
};

int main (){

    human human1("Daniel", 21, "physics and C++");

    std::cout << human1.name << " is " << human1.age << '\n';
    std::cout << human1.name << " is working on " << human1.subject <<".\n";

    dinner tonight("japanese","ramen");

    std::cout << "Tonight I am eating " << tonight.type << " food.\n";
    std::cout << "I think the food I want is " << tonight.food << ".\n";

    range heater;
    std::cout << "The range heater is " << heater.gettemp() << " degrees F.\n";

    heater.settemp(350);
    std::cout << "Temperature is now " << heater.gettemp() << " degrees F.\n";

    cooking cook;
    cook.prep();
    cook.eat();

    return 0;
}

/*object=collection of attributes and methods
they can have characterisitics and could perform actions
created from a class which acts as a blueprint
constructor = special method automatically called when an object is 
instantiated, useful for assigning values to attributes as arguments
they can be overloaded*/

/*abstraction=hiding unnecessary data from outside a class
getter=function that makes a private attribute readable
setter=function that makes a private attribute writeable*/

/*inheritance= class that can receive attributes and methods
from another class. Children classes inherit from a parent class
helps to reuse similar code found within multiple classes*/