#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

//дз1- самая правая/левая точка от прямой
vector <double> read_sort (string type){
   vector <double> points; // объявили массив типа double
   ifstream file ("in.txt"); //считывание файла
   if (file.is_open()){
       string line; //объявили пер-ю для строки
       while(!file.eof()){ //пока содержимое файла не кончилось (дальше пробела/новой строки)
           file >> line; //приравниваем содержимое файла= пер-я лайн
           points.push_back(stod(line)); //stod переводит "цифру" в цифру, записываем в массив points
       }
       points.pop_back(); //удаляет конечный эл-т
   }
   file.close();
   vector<double> X;
   vector<double> Y;
   for (int i=0; i<points.size(); i++){
       if ((i % 2)==0){
          X.push_back(points[i]);
       }else {
           Y.push_back(points[i]);
       }
   }
   if (type == "X"){
       return X;
   }else
       return Y;
}

void print (vector <double> & arr){
    for (int i=0; i<arr.size(); i++){
        cout<< arr[i]<<endl;
    }
}
double y_coord (double Xn, double Yn, double x_coord){
    return Yn/Xn*x_coord;
}

//vector <double> Orient (vector <double> & Y_razn, vector <double> & Y,vector <double> & X){
//    vector <double> Left;
//    vector <double> Right;
//    for(int i=0; i<Y_razn.size(); i++){
//        if (Y_razn[i]>0){
//            Right.push_back(Y[i])
//
//        }
//    }
//}

int main(){
vector<double> Y = read_sort("Y");
vector<double> X = read_sort("X");
//print(n);
double Xn = X[0];
double Yn = Y[0];
X.erase(X.begin());
Y.erase(Y.begin());

int s=1;
vector <double> Y_razn;
for (int i=0; i<Y.size(); i++){
    double y_razn = y_coord(Xn, Yn, X[i]) - Y[i];
    Y_razn.push_back(y_razn);
}

    double maxim = *max_element(Y_razn.begin(), Y_razn.end());
    double mini = *min_element(Y_razn.begin(), Y_razn.end());
for (int i=0; i<Y_razn.size(); i++){
    if (maxim==Y_razn[i]){
        cout << "Rightmost:"<< X[i] <<" " << Y[i]<< endl;
    }
    if (mini==Y_razn[i]){
        cout << "Lefttmost:"<< X[i] <<" " << Y[i]<< endl;
    }
}
return 0;
}

