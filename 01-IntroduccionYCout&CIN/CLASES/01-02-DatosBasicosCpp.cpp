#include <iostream>;
//00:08:55
using namespace std;
int main(){
    //Dato entero:
    //Son numeros completos y enteros, sin ninguna clase de decimal
    int numero = 10; //Declarando un numero cuyo valor es 10 (Se siente como java, ya que
    //hay que especificar el tipo de dato, el nombre de la variable, su valor y un ";"
    cout << "imprimiento un entero: "+ to_string(numero)+"\n";
    //float:
    //Este si es un valor decimal
    float  flotante = 0.1;//No hay mucho misterio frente al entero, nada más que, en vez de int, se pone el float
    cout << "imprimiendo un float: "+ to_string(flotante)+"\n";
    //Double:
    //Es lo mismo que el float, con la diferencia de que aguanta más valores
    double doble = 156145615.99;
    string men = "Imprimiendo un double: "+ to_string(doble);
    cout << men+"\n"<<endl;
    //char:
    //Son datos de tipo caracter
    char kickit = 'k';
    cout << "Impimendo un dato de tipo caracter: "+ to_string(kickit)+"\n";
}