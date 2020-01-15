#include <iostream>
using namespace std;
int a1 (int);
int a2 (int);
int a3 (int);
int a4 (int);
int main ()
{
	int y;
	int(*func[4])(int)={a1,a2,a3,a4};
	cout<<"masukkan ukuran sisi =";cin>>y;
	for(int j=0;j<4;j++){
		cout<<"Operasi Ke-"<<j+1<<
		" mempunyai hasil ="<<(*func[j])(y)<<endl;
	}
}
int a1 (int x)
{return x*x;}//Luas persegi(Operasi Ke-1)
int a2 (int x)
{return x*x*x;}//volume kubus(Operasi Ke-2)
int a3 (int x)
{return 4*x;}//Keliling belah ketupat(Operasi Ke-3)
int a4 (int x)
{return 6*(x*x);}//Luas kubus(Operasi Ke-4)
