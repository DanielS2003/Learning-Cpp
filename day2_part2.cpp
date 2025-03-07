#include <iostream>
#include <cstdlib> //needed for rand and srand
#include <ctime> //needed for time

int main(){
    std::cout << "You are playing D&D, your damage roll is a 1D6 and you need at least 4 damage to win this encounter." <<'\n';
   
    std::srand(time(0));
   
    int damage = (rand() %6)+1;

    switch(damage){
        case 0:
            std::cout << "You rolled " << damage << " and failed the damage check." << '\n';
            break;
        case 1:
            std::cout << "You rolled " << damage << " and failed the damage check." << '\n';
            break;
        case 2:
            std::cout << "You rolled " << damage << " and failed the damage check." << '\n';
            break;
        case 3:
            std::cout << "You rolled " << damage << " and failed the damage check." << '\n';
            break;
        case 4:
            std::cout << "You rolled " << damage << " and succeeded the damage check." << '\n';
            break;
        case 5:
            std::cout << "You rolled " << damage << " and succeeded the damage check." << '\n';
            break;
        case 6:
            std::cout << "You rolled " << damage << " and succeeded the damage check." << '\n';
            break;
        default:
            std::cout << "Something went wrong, perhaps a warlock's patron intervened." << '\n';
    }

    std::cout << "You now need to pass a DC 12 charisma check." <<'\n';
   
    std::srand(time(0));
   
    int charisma = (rand() %20)+1;

    std::cout << "You rolled " << charisma <<'\n';

    charisma >= 12 ? std::cout << "Success!" : std::cout << "Fail";

    return 0;

}

/*ternary operator ?: = replacement for an if else statement
condition ? expression1 : expression2;
for booleans you don't need to check if it is TRUE/FALSE
just write: variable ? expression1 : expression2;*/

/*logical operators
&& check if two conditions are true
|| check if at least one is true
! reverses logical state*/