#pragma once

enum Rsrc {none,fish,wood,rock};

class Pages{
    int stars=0;
    enum Rsrc resources[4]; 
    public: 
        Pages(int);
        Pages(int, enum Rsrc[4]);
        int get_stars();
        enum Rsrc* get_resources();
};
