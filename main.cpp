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
    return 0;
}