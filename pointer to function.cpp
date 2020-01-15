#include <iostream>
using namespace std;
int func1 (int);
int func2 (int);
int func3 (int);
int main ()
{
	int P;
	int (*F[3])(int)={func1,func2,func3};
	cout<<"masukkan angka =";cin>>P;
	cout<<"angka yang anda masukkan"<<P<<endl;
	for(int i=0;i<3;i++)
	cout<<"power "<<i+1<<" of the number "<<(*F[i])(P)<<endl;
	return 0;
}
int func1(int a)
{return a;}
int func2(int a)
{return a*a;}
int func3(int a)
{return a*a*a;}
