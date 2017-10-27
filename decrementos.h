#include <iostream>
using namespace std;
class Decrementos
{
	public:
	int a,b;
	public:
		void resta();
};

void Decrementos::resta()
{
	cout<<"teclee un numero: ";
	cin>>a;
	system("cls");
	cout<<"tecle un numero: ";
	cin>>b;
	system("cls");
	cout<<"= "<<a-b<<endl;
	system("pause");
}

