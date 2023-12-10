//
// Created by emanu on 17/11/2023.
//
//Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA.
#include <iostream>;

void CalcularIVA(float original, float d);

using namespace std;
int main(){
    float precioOriginal =0.0;
    cout<<"Digite el precio al que le quiere calcular el I.V.A\n";
    cin >> precioOriginal;
    CalcularIVA(precioOriginal, 0.13);
    return 0;
}

void CalcularIVA(float original, float valorIVA) {
float IVA = original * valorIVA;
float PrecioConTodo = IVA + original;
cout << "El precio final es de: "<<PrecioConTodo<< endl;
cout <<"Quiere saber cuanto pago de impuestos? Pago la suma de $"<<IVA<<endl;
}
