#ifndef Color_hpp
#define Color_hpp
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#define COLOR_TYPE_0 0
#define COLOR_TYPE_1 1
using namespace std;

namespace Color{
    class Color{
        public:
            int R[2];
            int G[2];
            int B[2];
            int wide;
            int r;
            int g;
            int b;
            string ToString(int status=0);
            Color(){
                r=g=b=0;
                R[0]=R[1]=0;
                G[0]=G[1]=0;
                G[0]=G[1]=0;
            }
            Color(int red,int green,int blue,int Wide=0){
                int w=Wide/2;
                wide = Wide;
                r=red;
                g=green;
                b=blue;
                if(r>255){
                    r=255;
                }else if(r<0){
                    r=0;
                }
                if(g>255){
                    g=255;
                }else if(g<0){
                    g=0;
                }
                if(b>255){
                    b=255;
                }else if(b<0){
                    b=0;
                }
                R[0]=r-w;
                if (R[0]<0)
                {
                    R[0]=0;
                }
                R[1]=r+w;
                if (R[1]>255)
                {
                    R[1]=255;
                }
                G[0]=g-w;
                if (G[0]<0)
                {
                    G[0]=0;
                }
                G[1]=g+w;
                if (G[1]>255)
                {
                    G[1]=255;
                }
                B[0]=b-w;
                if (B[0]<0)
                {
                    B[0]=0;
                }
                B[1]=b+w;
                if (B[1]>255)
                {
                    B[1]=255;
                }
                
            }
            Color(int red[2],int green[2],int blue[2]){
                R[0]=red[0];
                R[1]=red[1];
                G[0]=green[0];
                G[1]=green[1];
                B[0]=blue[0];
                B[1]=blue[1];
                r=(R[0]+R[1])/2;
                g=(G[0]+G[1])/2;
                b=(B[0]+B[1])/2;
                wide = ((R[1]-R[0])/2+(G[1]-G[0])/2+(B[1]-B[0])/2)/3;
            }
            Color operator + (const Color &A);
            Color operator * (const double &k);
    };
    Color Color::operator+(const Color &A){

        int w = (wide+A.wide)/2;
        int c[3]={r+A.r,g+A.g,b+A.b};
        for (int i = 0; i < 3; i++)
        {
            if(c[i]>255){
                c[i]=255;
            }
        }
        Color C(c[0],c[1],c[2],w);
        return C;
    }
    Color Color::operator*(const double &k){
        return Color(r*k,g*k,b*k,wide);
    }
    string Color::ToString(int status){
        if (status==COLOR_TYPE_0){
            return "{"+to_string(r)+","+to_string(g)+","+to_string(b)+"}";
        }else if(status==COLOR_TYPE_1){
            string set[3];
            set[0]="("+to_string(R[0])+","+to_string(R[1])+")";
            set[1]="("+to_string(G[0])+","+to_string(G[1])+")";
            set[2]="("+to_string(B[0])+","+to_string(B[1])+")";
            return "{"+set[0]+","+set[1]+","+set[2]+"}";
        }else{
            return "error";
        }
    }
    Color Red(int w=0);
    Color Green(int w=0);
    Color Blue(int w=0); 
    Color Cyan(int w=0);
    Color Yellow(int w=0);
    Color Magenta(int w=0);
    Color Red(int w){
       return Color(255,0,0,w); 
    }
    Color Green(int w){
        return Color(0,255,0,w);
    }
    Color Blue(int w){
        return Color(0,0,255,w);
    }
    Color Cyan(int w){
        return Color(0,255,255,w);
    }
    Color Yellow(int w){
        return Color (255,255,0,w);
    }
}
#endif /*sColor_hpp*/