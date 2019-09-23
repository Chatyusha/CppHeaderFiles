#ifndef Color_hpp
#define Color_hpp

#define DEFAULT_COLOR_WIDE 0
class Color{
    public:
        int R[2];
        int G[2];
        int B[2];
        int wide;
        int r;
        int g;
        int b;
        // Color(int r=0,int g=0,int b=0 ,int R[2] = Default) :r(r),g(g),b(b),R({R[0],R[1]}){}
        Color(){
            r=g=b=0;
            R[0]=R[1]=0;
            G[0]=G[1]=0;
            G[0]=G[1]=0;
        }
        Color(int red,int green,int blue,int wide=0){
            int w=wide/2;
            r=red;
            g=green;
            b=blue;
            R[0]=red-w;
            if (R[0]<0)
            {
                R[0]=0;
            }
            R[1]=red+w;
            if (R[1]>255)
            {
                R[1]=255;
            }
            G[0]=green-w;
            if (G[0]<0)
            {
                G[0]=0;
            }
            G[1]=green+w;
            if (G[1]>255)
            {
                G[1]=255;
            }
            B[0]=blue-w;
            if (B[0]<0)
            {
                B[0]=0;
            }
            B[1]=blue+w;
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
        }
        Color operator + (Color &A);
};
Color Color::operator+(Color &A){
    Color C(r+A.r,g+A.g,b+A.b);
    return C;
}
#endif /*sColor_hpp*/