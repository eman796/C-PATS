//Primer programa:
//Los programas escritos en este lenguaje se componen de librerías y de su función principal
#include <iostream> // Para incluir una librería, debemos poner el "#include", y entre los símbolos menor y mayor que, el nombre de la librería. En el caso de iostream, es la que permite ingresar y sacar datos
#include <iostream> //Añadiendo la librería iostream al proyecto
//#include "Twice-CryForMe.h" Asumiendo que "Twice-CryForMe.h" es una clase, se añade ak proyecto
//Luego va la función principal, donde se declara con "int", un nombre, paréntesis y corchetes (Como en Java)
using namespace std;// esto sirve para usar el standard de c++, para no escribir std::cout cada que vamos a imprimir algo
int main() {//Asi se declara una fuincion principal (int+nombre+()+{}
    cout << "Hola mundo desde C++" << endl;//endl sirve para hacer salto de línea. Es como el \n de Java
    return 0;
}