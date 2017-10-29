#include <iostream>
#include <math.h>
using namespace std;
class Decrementos
{
	private:
		double a,b,res;
		bool ch;
	public:
		void resta();
		void raiz();
		void division();
};

void Decrementos::resta()
{
	cout<<"Teclee un n\243mero: ";
	cin>>a;
	cout<<"Teclee otro n\243mero: ";
	cin>>b;
	cout<<a<<" + "<<b<<" = "<<a-b<<endl;
	system("pause");
}

void Decrementos::raiz(){
	cout<<"Ingrese el valor"<<endl;
	cin>>a;
	if(a>=0){
		cout<<"La ra\241z cuadrada de "<<a<<" es: "<<sqrt(a)<<endl;	
		ch=true;
	}
	else{
		cout<<"No es posible realizar raiz cuadrada de numeros negativos"<<endl;
	}
	system("pause");
}
void Decrementos::division()
{
	cout<<"Teclee un n\243mero: ";
	cin>>a;
	
	cout<<"Teclee un n\243mero: ";
	cin>>b;
	
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	system("pause");
}
