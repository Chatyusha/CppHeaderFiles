#ifndef Color_hpp
#define Color_hpp

class Color{
    public:
        int r;
        int g;
        int b;
        Color(int r=0,int g=0,int b=0) :r(r),g(g),b(b) {}
        Color operator + (const Color &A);
};
Color Color::operator+(const Color &A){
    Color C(r+A.r,g+A.g,b+A.b);
    return C;
}
#endif /*sColor_hpp*/