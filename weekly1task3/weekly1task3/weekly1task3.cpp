#include <iostream>

int age; 


int main()
{
    std::cout << "what is your age?";
    std::cin >> age;
    if (age < 20) { std::cout << "you are young"; }
    if (age >= 20 && age <= 40) { std::cout << "you are grown up"; }
    if (age >= 41 && age <= 59) { std::cout << "you are old"; }
    if (age >= 60) { std::cout << "you ARE really old"; }
}
    
