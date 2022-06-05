#pragma once
#ifndef __PAGES_HPP
#include "pages.hpp"
#endif

/*
 * Cards
 * site 1 /---\   site 2 /---\
 *        | 0 |          | 2 | 
 *        -----          >---<
 *        | 1 |          | 3 |
 *        \---/          \---/
 */

/*
 * visible: 0>[0,1] 1>[1,0] 2>[2,3] 3>[3,2]
 *          0>1     1>0     2>3     3>2
 */

/*
 * flip:    0>2, 1>3, 2>0, 3>1
 * rotate:  0>1, 1>0, 2>3, 3>2
 */

/*
void print_rsrc(enum Rsrc *arr);
*/

class Cards{
    int number=01;
    int active_page=0;
    int position=0;
    std::string name;
//    Pages pgs[4] {0,1,2,3};
    public:
        void display();
        Cards(std::string);
 //       Cards(std::string,enum Rsrc[4]);
        std::string get_name();
        int get_flip_no(int);
        int get_rot_no(int);
        void flip();
        void rotate();
}; 

