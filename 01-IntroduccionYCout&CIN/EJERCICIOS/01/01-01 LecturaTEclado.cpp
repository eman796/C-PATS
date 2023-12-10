//Escribir un programa que pueda leer la entrada estandar dos numeros y muestre en la salida su suma, resta, multiplicacion y división
#include <iostream>;

int multiplicar(int i, int i1);

int sumar(int num1, int num2);

int restar(int num1, int num2);

void dividir(int num1, int num2);

void Potenciar(int num1);

using namespace std;

int main() {
int num1;
int num2;
cout << "Digite el primer numero" << endl;
cin >> num1;
cout << "Digite el segundo numero" << endl;
cin>>num2;
    multiplicar(num1, num2);
    sumar(num1, num2);
    restar(num1,num2);
    dividir(num1,num2);
    Potenciar(num1);
    Potenciar(num2);
    return 0;
}

void Potenciar(int num) {
int valor = num * num;
cout << "El valor del número potenciado es "<<to_string(valor)+"\n";
}

void dividir(int num1, int num2) {
int valor = num1/num2;
cout << "El valor de la division :"<<to_string(valor);
}

int restar(int num1, int num2) {
int valor = num1-num2;
cout << "El valor de la resta es :"+to_string(valor) + "\n";
return valor;
}

int sumar(int num1, int num2) {
 int valor = num1 + num2;
    cout<<"El resultado de la suma es"+ to_string(valor)+"\n";
    return valor;
}

int multiplicar(int num1, int num2 ){
int valor = num1 * num2;
cout<<"El resultado de la multiplicacion es "+ to_string(valor)+"\n";
return valor;
};

