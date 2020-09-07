#include <iostream>

std::string Name;
int age;
char answer;
char y = 'y';
char Y = 'Y';
char n = 'n';


int main()
{
    std::cout << "enter your name:";
    std::cin >> Name;

    std::cout << "enter your age:";
    std::cin >> age;

    std::cout << "do you like coffee? (y/n):";
    std::cin >> answer;
    std::cout << "\n";
    

    std::cout << "your name is: " << Name << "\n";
    std::cout << "you are " << age << " years old\n";
    if (answer == y or answer == Y) { std::cout << "seems like you like coffee";}
    else { std::cout << "seems like you don't like coffee"; }


}

