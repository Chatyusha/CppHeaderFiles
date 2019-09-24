#include <iostream>
#include "HaderFiles/Color.hpp"
#include "HaderFiles/Vector2.hpp"
#include "HaderFiles/Mathf.hpp"

using namespace std;
using namespace Mathf;

int main(){
    Vector::Vector2 v = Vector::Up;
    cout<<v.ToString()<<endl;
    return 0;
}