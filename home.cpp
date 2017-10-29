/* @author Equipo Pelcastre, Ingenieria de Software
Calculadora simple con funciones basicas
*/
#include <iostream>
#include "incrementos.h"
#include "decrementos.h"

/*
	El programa funcionó de manera correcta.
	Favor de tener usuarios representativos de git para que en un futuro no tengan
	inconvenientes, ya que "idarkkreecher" es algo complicado de entender, sobre todo si trabajan
	en un ambiente muy profesional, todo depende del ámbito laboral.
	
	En cuanto a los commits, me parece que los entendieron bien, la unica observación es que traten
	de hacerlos más cortos por ejemplo en vez de
	"Se agrego la funcion divicion y fue llamada en el archivo principal :v"
	algo como:
	"Función división"
	
	Para no crear conflicto al leer todo el texto, de igual manera CUIDAR LA ORTOGRAFÍA y evitar uso de
	"emojis" o caritas, va de la mano con lo anterior, hay que ser profesionales en el trabajo. En esta ocasión
	no hay mayor problema pero como tip deben tomarlo en cuenta.
	
	EQUIPO:
	- SONI GONZALEZ EDSON IVAN
	- GONZALEZ GARCIA EDGAR
	- PELCASTRE GARCIA BRYAN JAHAZIEL
	- CARPIO PEÑA YAQUELIN
	- PEREZ HERNANDEZ RODOLFO

*/
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
				decrementos->division();
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
