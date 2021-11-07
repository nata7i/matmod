//#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <cmath>
#include "fact.cpp"
using namespace std;

//вывод вектора y=f(x)
 vector <double> func(vector <double> & arr) {
     int i=0;
    for (i=0; i<arr.size(); i++){
        arr[i] = cos(arr[i]);
    }
    return arr;
}
int main() {
vector <double> x = {0, M_PI, M_PI/2};
vector <double> y = func(x);
int j=0;
for (j=0; j<y.size(); j++){
    cout <<y[j] <<endl;
}

cout<< func(3);



//    double x = M_PI;
//    double y = cos(x);
//    std::cout << y;
    return 0;
}