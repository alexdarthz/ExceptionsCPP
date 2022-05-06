#include <iostream>
#include "subfile.h"

int main()
{
    int header = 0;
    int footer = 0;
    char symbol = ' ';

    std::cout << "Введите дробь в виде ([числитель]/[знаменатель]): ";
    std::cin >> header;
    std::cin >> symbol;
    std::cin >> footer;
    Frac* dfrac = new Frac(header, footer);

    std::cout << "числитель равен = " << dfrac->header << std::endl;
    std::cout << "знаменатель равен = " << dfrac->footer << std::endl;

    dfrac->~Frac();
}
