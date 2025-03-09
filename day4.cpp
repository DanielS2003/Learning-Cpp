#include <iostream>

double getTotal(double tradeprices[], int size);
void sort(double array[], int size);

int main() {

    std::string classes[]= {"Bard", "War Cleric", "Paladin", "Warlock", "Mage", "Ranger"};
    classes[0] = "Fighter";

    std::cout << "The available combat classes are:" <<'\n';
    for(int i = 0; i<6; i++) {
        std::cout << classes[i] << " ";
    }
    std::cout << '\n';

    std::string backgrounds[]= {"Noble", "Artisan", "Warrior", "Scholar", "Urchin", "Commoner"};
    std::cout<< "The available character backgrounds are: " << '\n';
    for(std::string background : backgrounds){
        std::cout << background << " ";
    }
    std::cout << '\n';

    double tradeprices[]={12, 15.4, 8.49, 10.99, 23.86, 4, 7.99};
    int size= sizeof(tradeprices)/sizeof(tradeprices[0]);
    double total = getTotal(tradeprices, size);

    std::cout << "The total is $" <<total <<'\n';

    sort(tradeprices, size);

    std::cout <<"Prices listed in descending order are: ";
    for(double element : tradeprices){
        std::cout << element << " ";
    }
    std::cout << '\n';

    std::string foods[3];
    int size2 = sizeof(foods)/sizeof(foods[0]);

    for(int i=0; i<size2; i++) {
        std::cout << "Enter a food you like #" << i+1 << ": ";
        std::getline(std::cin, foods[i]);
    }

    std::cout << "You like the following foods: ";

    for(std::string food : foods) {
        std::cout << food << " ";
    }

    return 0;
}

double getTotal(double tradeprices[], int size){
    double total=0;
    for(int i = 0; i <size; i++) {
        total+=tradeprices[i];
    }
    return total;
}

void sort(double array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] < array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

}

/*notes
sizeof() determines the size, in bytes, of a: variable, data type, etc...
foreach loop eases traversal over iterable data
fill(begin, end, value) fills a range of elements with a specified value 
*/