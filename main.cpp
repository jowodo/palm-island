#include <stdio.h> 
#include <iostream>
#include <string>
#include "cards.hpp"

int main()
{
    //printf("Palm Island\n");
    //std::cout <<"Palm Island2\n";
    //std::string name = "Palm Island#\n";
    //std::cout << name;
    Cards fish("fish");
    fish.display();
    std::cout<<"hello I'm a "<<fish.get_name()<<std::endl;
    return 0;
}
