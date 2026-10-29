#include <cmath>
#include "../include/Angle.hpp"
double Angle::solver(double d)
{
    double theta;
    if( d <= v0*v0/g)
    {
        theta = asin(d*g/(v0*v0))/2;
    }
    else
    {
        theta = false;
    }
    return theta;
}