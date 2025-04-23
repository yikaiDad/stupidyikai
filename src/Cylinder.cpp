# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <cmath> 

double Cylinder :: SurfaceArea(){
    return 2 * radius * radius * M_PI + 2 * radius * M_PI * height;
}

double Cylinder :: Volume(){
    return height * radius * radius * M_PI;
}

double Cylinder :: Circumference(){
    return 2 * radius * M_PI;
}

istream & operator>>(istream & in, Cylinder & cldr)
{

    return ;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    
    return ;
}

# endif
