#include <iostream>
#include <string>

int age;
std::string Fullname;
char Initial;
long Phonenumber;
long Birthday; 
int Date;
int Month;
int Year;


int main()
{
    std::cout << "enter your full name:";
    std::getline(std::cin,   Fullname);
    
    std::cout << "enter your age:";
    std::cin >> age;
    
    std::cout << "enter your phone number:";
    std::cin >> Phonenumber; 
    

    std::cout << "enter your birthday with numbers:\n";
    std::cout << "month:";
    std::cin >> Month;
    std::cout << "date:";
    std::cin >> Date;
    std::cout << "year:";
    std::cin >> Year;
    
    std::cout << "-----------------------------\n";
    std::cout << "|  Name      |" << Fullname << "\n";
    std::cout << "|  Initial   |" << Fullname[0] << "\n";
    std::cout << "|  Age       |" << age << "\n";
    std::cout << "|  Phone num |" << Phonenumber << "\n";
    std::cout << "|  Birthday  |" << Month << "/" << Date << "/" << Year << "\n";
    std::cout << "-----------------------------";
    
    

    

}
