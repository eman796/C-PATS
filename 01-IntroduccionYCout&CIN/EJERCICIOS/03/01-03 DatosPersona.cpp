//
// Created by emanu on 17/11/2023.
//
#include <iostream>;
#include <stdexcept>
using namespace std;
int main() {
    int edad = 0;
    char sex[6];
    double Height;
    cout << "Digite su edad\n" ;
    cin >> edad;
    cout << "Digite su sexo" << endl;
    cin >> sex;
    cout << "Digite su altura" << endl;
    cin >> Height;
    cout << "Imprimiendo todo: \n";
    cout << "Edad: "<<edad << endl <<"Sexo: "<<sex << endl<<"Altura:"<<to_string(Height);
    cout << "\n Gracias por usar el software :)";
    system("exit");
}