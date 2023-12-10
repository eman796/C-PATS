//
// Created by emanu on 9/12/2023.
//
//1. Escribir luna expresion en c++
#include <iostream>

void operacion(int a, int i);

using namespace std;
int main(){
    int a;
    int b;
    cout<<"Digite un valor para a: "<<endl;
    cin>>a;
    cout<<"Digite un valor para b: "<<endl;
    cin>>b;
    operacion(a,b);
    return 0;
}

void operacion(int a, int b) {
int result = (a/b)+1;
cout<<"El resultado de la operacion es: "<<result;
}
