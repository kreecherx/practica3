#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
class Incrementos
{
	private:
		double a,b,res;
	public:
		void suma();
        void multiplicacion();
        void potencia();
};

void Incrementos::suma()
{
	 cout<<"Introduzca el primer valor"<<endl;
      cin>>a;
      cout<<"Introduzca el segundo valor"<<endl;
      cin>>b;
      res=a+b;
      cout<<a<<" + "<<b<<" = "<<res<<endl;
      system("pause");
}

void Incrementos::multiplicacion()
{
	 cout<<"Introduzca el primer valor"<<endl;
      cin>>a;
      cout<<"Introduzca el segundo valor"<<endl;
      cin>>b;
      res=a*b;
     cout<<a<<" * "<<b<<" = "<<res<<endl;
      system("pause");

}

void Incrementos::potencia(){
	cout<<"Introduzca el valor"<<endl;
	cin>>a;
	cout<<"Indique el valor del exponente"<<endl;
	cin>>b;
	res=pow(a,b);
	cout<<a<<"^"<<b<<" = "<<res<<endl;
	system("pause");
}
