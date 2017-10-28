#include <iostream>
using namespace std;
class incrementos
{
	public:
	double a,b,res;
	public:
		void suma();
};

void incrementos::suma()
{
	 cout<<"introdusca el primer valor"<<endl;
      cin>>a;
      cout<<"introdusca el segundo valor"<<endl;
      cin>>b;
      res=a+b;
      system("pause");
}
