#include <iostream>
#include "HaderFiles/Color.hpp"
#include "HaderFiles/Vector2.hpp"
#include "HaderFiles/Mathf.hpp"

using namespace std;
using namespace Mathf;

int main(){
    Vector2 v(3,4),c(8,6);
    cout<<c.ToString()<<endl;
    cout<<Round(PI,2)<<endl;
    bool b = c>=c;
    cout<<b<<endl;
    return 0;
}