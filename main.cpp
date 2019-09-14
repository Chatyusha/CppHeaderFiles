#include <iostream>
#include "HaderFiles/Color.hpp"
#include "HaderFiles/Vector2.hpp"
#include "HaderFiles/Mathf.hpp"

using namespace std;
using namespace Mathf;

int main(){
    Vector2 v(3,4),c;
    c=v.Unit();
    cout<<c.ToString()<<endl;
    cout<<Round(PI,2)<<endl;
    return 0;
}