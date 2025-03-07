#include <iostream>
#include <cmath>

/*type conversion=conversion of a value between types 
can be implicit(automatic) or explicit(manual)*/
/*cout << is the insertion operator while cin >> is the extraction operator*/

int main(){
    double x= (int) 14.3; //explicit conversion
    std::cout <<x <<'\n';

//using cin as an example
    std::string name;
    std::string job;
    int age;
//getline is good for responses with spaces or whitespace
    std::cout << "What's your name?: ";
    std::getline(std::cin, name);

    std::cout << "How old are you?: ";
    std::cin >> age;
    /*std::cin.ignore(); this will clear out the whitespace
    so the the next getline can work properly*/

    std::cout << "What is your dream job?: ";
    std::getline(std::cin >> std::ws, job);
//instead of using std::cin.ignore() you can also insert >>ws
    std::cout << "Hello " << name <<'\n';
    std::cout << "You are " << age << " years old." <<'\n';
    std::cout << "Your dream of being a " << job << '\n';
//conditional statements
    if(age >= 16){
        std::cout << "Since you are older than 16, you can get a job now."<< '\n';
    }
    else if(age<0) {
        std::cout << "You haven't been born yet, how are you doing this?" <<'\n';
    }
    else{
        std::cout << "Since you are younger than 16, you can't work. Until you are old enough, try learning C++." << '\n';
    }
//doing some basic math
    double a;
    double b;
    double c;
    std::cout << "Let's calculate the hypotenuse of a right triangle" << '\n';
    std::cout << "Enter side a: ";
    std::cin >> a;
    std::cout << "Enter side b: ";
    std::cin >> b;
    c=sqrt(pow(a,2)+pow(b,2));
    std::cout << "The length of the hypotenuse is " <<c;
    return 0;
}
/*useful math operations as follows
std::max(x,y) finds the max
std::min(x,y) finds the min
pow(x,y) raises x to the power of y
sqrt(x) returns the square root of x
abs(x) gives absolut value
round(x) rounds the number
ceil(x) rounds up and floor(x) rounds down*/