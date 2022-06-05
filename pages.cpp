#ifndef __PAGES_HPP
#include "pages.hpp"
#endif

/*
 *
 * Card Number:     1               (int)
 * -------------------
 * Resources:       wood, fish,,    (enum Rsrc*)
 * Name:            Fishen          (string)
 * Aktions:         tap,rot,flip    (enum?)
 *
 */

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
