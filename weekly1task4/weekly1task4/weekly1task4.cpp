#include <iostream>

int drink;

int main()
{
    std::cout << "do you prefer coffee (1), tea (2) or coca cola (3)?";
    std::cin >> drink;
    if (drink == 1) { std::cout << "coffee is delicious"; }
    if (drink == 2) { std::cout << "tea gives you peace of mind"; }
    if (drink == 3) { std::cout << "coke will give you a white smile"; }
}
