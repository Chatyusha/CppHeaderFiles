#include <iostream>
#include "HaderFiles/Color.hpp"
#include "HaderFiles/Vector2.hpp"
#include "HaderFiles/Mathf.hpp"

using namespace std;
using namespace Mathf;

int main(){
    Vector2 v(3,4),c(1.5,2);
    cout<<c.ToString()<<endl;
    cout<<Round(PI,2)<<endl;
    bool b = v.IsParallel(c);
    cout<<b<<endl;
    Vector2 a(1,0),d(1,1.7320508);
    cout<<a.Angle(d)*Rad2Deg<<endl;
    Vector2 X(3,4),A(1,0);
    Vector2 C = X.OrthographicProjection(A);
    cout<<C.ToString()<<endl;
    return 0;
}