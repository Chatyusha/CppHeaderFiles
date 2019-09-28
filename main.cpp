#include <iostream>
#include "HaderFiles/Color.hpp"
#include "HaderFiles/Vector2.hpp"
#include "HaderFiles/Mathf.hpp"
#include <vector>
#include <algorithm>
                                                        
using namespace std;
using namespace Mathf;

int main(){
    Color::Color c(10,10,10,2);
    cout<<(c*27).ToString(COLOR_TYPE_1)<<endl;
    return 0;
}
