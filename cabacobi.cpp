#include <iostream>
#include <cstring>
using namespace std;
void pengecekan(){
	char t0[15]		=	{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'};
	char t1[15]		=	{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'};
	char t2[15]		=	{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'};
	char t3[15]		=	{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'};
	char t4[15]		=	{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'};
	char t5[15]		=	{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'};
	char t6[15]		=	{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'};
	char t7[15]		=	{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'};
	char t8[15]		=	{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'};
	char t9[15]		=	{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'};
	char t10[15]	=	{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'};
	char t11[15]	=	{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'};
	char t12[15]	=	{'m','o','s','g','z','c','z','d','t','d','b','o','o','t','o'};
	char t13[15]	=	{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'};
	char t14[15]	= 	{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
	char *(table[15]) = {t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14};
	char kata[15];
	int cari,jumlah,uji,coba=0;
	cout<<"Masukkan katanya :";
	cin>>kata;
	jumlah=strlen(kata);
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++){
			if(kata[0]==*(*(table+i)+j)){//====diagonal kanan atas
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i-k))+(j+k))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
				//====diagonal kanan bawah
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i+k))+(j+k))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
				//==== kanan
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i))+(j+k))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
				//==== kiri
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i))+(j-k))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
				//==== atas
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i-k))+(j))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
				//==== bawah
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i+k))+(j))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
				//====diagonal kiri atas
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i-k))+(j-k))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;//====diagonal kiri bawah
				for(int k=0;k<jumlah;k++){
					if(kata[k]==*(*(table+(i+k))+(j-k))){
						uji=k;}
					else{
						break;}
				}
				if(uji==jumlah-1){
					coba=coba+1;}
				else{
					coba=coba+0;}
				uji=0;
			}
		}
	}
	//====pengujiannya
	if(coba!=0){
	cout<<"ADA"<<endl;
	coba=0;
	}	
	else{
	cout<<"TIDAK ADA"<<endl;
	}
}
int main ()
{
	char t0[15]		=	{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'};
	char t1[15]		=	{'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'};
	char t2[15]		=	{'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'};
	char t3[15]		=	{'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'};
	char t4[15]		=	{'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'};
	char t5[15]		=	{'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'};
	char t6[15]		=	{'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'};
	char t7[15]		=	{'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'};
	char t8[15]		=	{'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'};
	char t9[15]		=	{'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'};
	char t10[15]	=	{'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'};
	char t11[15]	=	{'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'};
	char t12[15]	=	{'m','o','s','g','z','c','z','d','t','d','b','o','o','t','o'};
	char t13[15]	=	{'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'};
	char t14[15]	= 	{'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'};
	char *(table[15]) = {t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14};
	int cari;
	//=====print tabel yang diatas
	for (int i=0;i<15;i++){
		for (int j=0;j<15;j++){
		cout<<*(*(table+i)+j)<<" ";
		}
	cout<<endl;
	}
	cout<<"Masukkan jumlah kata yang ingin dicari : ";
	cin>>cari;
	for(int i=0;i<cari;i++){
		pengecekan();
	}
}
