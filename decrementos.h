#include <iostream>
#include <math.h>
using namespace std;
class Decrementos
{
	public:
	double a,b,res;
	public:
		void resta();
		void raiz();
		void divicion();
};

void Decrementos::resta()
{
	cout<<"teclee un n\243mero: ";
	cin>>a;
	system("cls");
	cout<<"tecle un n\243mero: ";
	cin>>b;
	system("cls");
	cout<<"= "<<a-b<<endl;
	system("pause");
}

void Decrementos::raiz(){
	cout<<"Ingrese el valor"<<endl;
	cin>>a;
	cout<<"La ra\241z cuadrada de "<<a<<" es: "<<sqrt(a)<<endl;
	system("pause");
}
void Decrementos::divicion()
{
	cout<<"teclee un n\243mero: ";
	cin>>a;
	
	cout<<"tecle un n\243mero: ";
	cin>>b;
	
	cout<<"= "<<a/b<<endl;
	system("pause");
}
