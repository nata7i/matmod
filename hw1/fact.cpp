#include <iostream>
using namespace std;
#include <cstdlib> //библиотека рандома

int func (int n){
    if (n==0){
        return 1;
    }
    if (n<0){
        cout<< "n<0";
        return 0;
    }
    return n* func(n-1);
}

vector <double> random (int n){
    vector <double> z;
    for (int i=0; i<n; i++){
        z.push_back(rand() %101);
    }
    return z;
}




// Created by Наталья on 05.11.2021.
//

