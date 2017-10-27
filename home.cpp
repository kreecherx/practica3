/* @author Equipo Pelcastre, Ingenieria de Software
Calculadora simple con funciones basicas
*/
#include <iostream>
//#include "incrementos.h"
//#include "decrementos.h"

using namespace std;

int main (){
	int c;
	do{
		system("CLS");
		cout<<"Escoja la operacion que desea realizar: \n1) Suma\n2) Resta\n3) Division\n4) Multiplicacion\n\n0)Salir\n\n";
		cout<<"Ingrese el numero: ";
		cin>>c;
		switch(c){
			case 1:
				//suma();
				break;
			case 2:
				//resta();
				break;
			case 3:
				//division();
				break;
			case 4:
				//multiplicacion();
				break;
			case 0:
				break;
			default:
				cout<<"El numero ingresado no es valido, vuelva a intentarlo\n\n";
				system("PAUSE");
		}
	}while(c!=0);
	return 0;
}
