#ifndef Mathf_hpp
#define Mathf_hpp
#include <cmath>
namespace Mathf {
    const double PI = 3.14159274;
    const double E = 2.71828183;
    const double Deg2Rad = 0.0174532924;
    const double Rad2Deg = 57.29578;
    double deg_cos(double x){
        return cos(x*Deg2Rad);
    }
    double deg_sin(double x){
        return sin(x*Deg2Rad);
    }
    double deg_tan(double x){
        return tan(x*Deg2Rad);
    }
    double deg_acos(double x){
        return acos(x)*Rad2Deg;
    }
    double deg_asin(double x){
        return asin(x)*Deg2Rad;
    }
    double deg_atan(double x){
        return atan(x)*Deg2Rad;
    }
    double deg_atan2(double x,double y){
        return atan2(x,y)*Deg2Rad;
    }
    double TenPow(int n){
        return pow(10,(double)n);
    }
    double Round(double x,int n){
        return round(x*TenPow(n))/TenPow(n);
    }
}

#endif /*Mathf_hpp*/