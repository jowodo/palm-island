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
    enum Rsrc array[4]={fish,none,none,none};
    Cards fish("fishen",array);
//    Cards fish("fishen");
    fish.display();
//    fish.flip();
 //   fish.display();
  //  fish.rotate();
   // fish.display();
    return 0;
}
