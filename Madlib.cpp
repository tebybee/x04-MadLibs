#include <iostream>
#include <string>

int main()
{
    int frequency;
    std::string name;
    char title;
    double balance;

    std::cout<< "Number between 1 and 20?\n";
    std::cin>> frequency;
    std::cout<< "Name of choice?\n";
    std::cin>> name;
    std::cout<< "Letter of choice?\n";
    std::cin>> title;
    std::cout<< "Double of choice?\n";
    std::cin>> balance;
    std::cout<< frequency<< " times a week "<<name<< " goes to " <<title<< " Pie in order to get some pizza.\n";
    std::cout<< "Though today " <<name<< " only had $" <<balance<< ", so he couldn't afford any pizza.\n";
    return 0;
}
