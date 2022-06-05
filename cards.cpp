#ifndef __IOSTREAM_H
#include <iostream>
#endif
#include "cards.hpp"
#include <string>

/*
 * Cards
 * site 1 /---\   site 2 /---\
 *        | 0 |          | 2 | 
 *        -----          >---<
 *        | 1 |          | 3 |
 *        \---/          \---/
 * 
 */

/*
 * flip:    0>2, 1>3, 2>0, 3>1
 * rotate:  0>1, 1>0, 2>3, 3>2
 */

/*
 * visible: 0>[0,1] 1>[1,0] 2>[2,3] 3>[3,2]
 *          0>1     1>0     2>3     3>2
 */

void Cards::display(){
    std::cout<<"/-------\\"<<std::endl;
    std::cout<<"|0"<<number<<"     |"<<std::endl;
    std::cout<<"| "<<pgs[active_page].get_resources()[0]<<" "<<std::endl;
 //   print_rsrc(pgs[active_page].get_resources());
    std::cout<<"| "<<pgs[active_page].get_stars()<<"* ";
    std::cout<<name<<std::endl;
    std::cout<<"|   "<<active_page<<"   |"<<std::endl;
    std::cout<<">-------<"<<std::endl;
    std::cout<<"|   "<<get_rot_no(active_page)<<"   |"<<std::endl;
    std::cout<<"| "<<pgs[get_rot_no(active_page)].get_stars()<<"* ";
    std::cout<<name<<std::endl;
    std::cout<<"\\-------/"<<std::endl;
    return;
}

Cards::Cards(std::string named){
    name= named; 
}

Cards::Cards(std::string named, enum Rsrc *arr){
    name= named; 
    //print_rsrc(arr);
    pgs[0] = Pages(0,arr);
}

std::string Cards::get_name(){
    return name;
}

int Cards::get_flip_no(int active_no){
    return (active_no+2)%4;
}

int Cards::get_rot_no(int active_no){
    return active_no+(active_no+1)%2-(active_no)%2;
}

void Cards::flip(){
    std::cout<<" ### >>flipped"<<std::endl;
    active_page = get_flip_no(active_page);
    return;
}

void Cards::rotate(){
    std::cout<<" ### >>rotated"<<std::endl;
    active_page = get_rot_no(active_page);
    return;
}

Pages::Pages(int stars_def){
    stars = stars_def;
}

Pages::Pages(int stars_def,enum Rsrc rsrcs[4]){
    stars = stars_def;
    resources[4] = rsrcs[4];
}

int Pages::get_stars(){
    return stars;
}

enum Rsrc* Pages::get_resources(){
    return resources;
}

/*
void print_rsrc(enum Rsrc *arr){
    std::cout<<arr[0]<<std::endl;
    std::cout<<arr[1]<<std::endl;
    std::cout<<arr[2]<<std::endl;
    std::cout<<arr[3]<<std::endl;
    return;
}
*/
