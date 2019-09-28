#include <iostream>
#include "HaderFiles/Color.hpp"
#include "HaderFiles/Vector2.hpp"
#include "HaderFiles/Mathf.hpp"
#include <vector>
#include <algorithm>
                                                        
using namespace std;
using namespace Mathf;

int main(){
    Color::Color c(128,128,128);
    Color::Color d(160,148,129);
    cout<<(c+d).ToString(COLOR_TYPE_1)<<endl;
    return 0;
}
