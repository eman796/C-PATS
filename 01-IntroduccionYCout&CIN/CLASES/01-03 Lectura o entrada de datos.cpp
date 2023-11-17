//
// Created by emanu on 24/10/2023.
//
//00:14:00 - Leer o escribie datos
//Para empezar, debemos importar la libreria correspondiente a la entrada y salida de datos, la cual es "iostream"
#include <iostream>
using namespace std;// Ponemos eso para evitar poner std::cout o std::cin
int main(){//Declaramos el Main
    int number;//Definiendo la variable
    cout << "Digita un numero "<<endl;//Pedimos al usuario que digite un número
    cin>>number;// Almacenando el dato del usuario en la variable number
    cout << "El numero digitado es "+ to_string(number)<<endl;//Se puede hacer así,pero  hay otra forma
    cout<<"El numero digitado es "<<number;//Y esta es la otra forma
}//Me despierto 6 am en otro barrio un domingo, pero decime donde estas, toy en cinco
