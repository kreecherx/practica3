#include<iostream>
#include<windows.h>
using namespace std;
class Incrementos
{
	private:
	double a,b,res;
	public:
		void suma();
        void multiplicacion();
};

void Incrementos::suma()
{
	 cout<<"introdusca el primer valor"<<endl;
      cin>>a;
      cout<<"introdusca el segundo valor"<<endl;
      cin>>b;
      res=a+b;
      cout<<a<<"+"<<b<<"="<<res<<endl;
      system("pause");
}
void Incrementos::multiplicacion()
{
	 cout<<"introduzca el primer valor"<<endl;
      cin>>a;
      cout<<"introduzca el segundo valor"<<endl;
      cin>>b;
      res=a*b;
     cout<<a<<"*"<<b<<"="<<res<<endl;
      system("pause");

}

