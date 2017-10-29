/* @author Equipo  jajaziel Pelcastre, Ingenieria de Software
Calculadora simple con funciones basicas
*/
#include <iostream>
#include "incrementos.h"
#include "decrementos.h"

using namespace std;

int main (){
	int c;
	 Decrementos *decrementos = new Decrementos();
	 Incrementos *incrementos = new Incrementos();
	do{
		system("CLS");
		cout<<"Escoja la operaci\242n que desea realizar: \n1) Suma\n2) Resta\n"
		"3) Divisi\242n\n4) Multiplicaci\242n\n"
		"5) Potencia \n6) Ra\241z Cuadrada\n0) Salir\n\n";
		cout<<"Ingrese el n\243mero: ";
		cin>>c;
		switch(c){
			case 1:
				incrementos->suma();
				break;
			case 2:
				decrementos->resta();
				break;
			case 3:
			decrementos->divicion();
			
				break;
			case 4:
				incrementos->multiplicacion();
				break;
			case 5:
				incrementos->potencia();
				break;
			case 6:
				decrementos->raiz();
				break;
			case 0:
				break;
			default:
				cout<<"El n\243mero ingresado no es valido, vuelva a intentarlo\n\n";
				system("PAUSE");
		}
	}while(c!=0);
	return 0;
}
