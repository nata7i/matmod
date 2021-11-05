#include <iostream>
using namespace std;

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






// Created by Наталья on 05.11.2021.
//

