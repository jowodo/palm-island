#ifndef __IOSTREAM_H
#include <iostream>
#endif
#include "cards.hpp"
#include <string>

void Cards::display(){
    std::cout<<"hello i'm a card\n";
    return;
}

Cards::Cards(std::string named){
    name= named; 
}

std::string Cards::get_name(){
    return name;
}
