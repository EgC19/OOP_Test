# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<bits/stdc++.h>
using namespace std;

double Cylinder :: SurfaceArea(){
    double pi=M_PI;
    double A=pi*radius*radius;
    double S=2*pi*radius*height;
    return A+A+S;
}

double Cylinder :: Volume(){
    double pi=M_PI;
    double A=pi*radius*radius;
    return A*height;
}

double Cylinder :: Circumference(){
    double pi=M_PI;
    return 2*pi*radius;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<"Circumference: "<<fixed<<setprecision(3)<<cldr.Circumference()<<endl;
    out<<"SurfaceArea: "<<fixed<<setprecision(3)<<cldr.SurfaceArea()<<endl;
    out<<"Volume: "<<fixed<<setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif
