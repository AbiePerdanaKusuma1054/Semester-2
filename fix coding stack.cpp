/*---Abie Perdana Kusuma
--------1817051054------
*/
#include <iostream>
using namespace std;

struct Element{
	int data;
	Element *next;
};
struct Element *top=NULL;
bool isEmpty(){
	return top==NULL;
}
void push(){
	Element *baru;
	baru=new Element;
	cout<<"Masukkan Data :";
	cin>>baru->data;
	baru->next=NULL;
	if(isEmpty()){
		top=baru;
		top->next=NULL;
	}
	else{
		baru->next=top;
		top=baru;
	}
}
void pop(){
	Element *baru;
	if(top==NULL){
		cout<<"Stack masih kosong"<<endl;
	}
	else{
		baru=top;
		top=top->next;
		delete baru;
	}
}
void getTop(){
	if(isEmpty()){
		cout<<"Stack masih kosong"<<endl;
	}
	else{
		cout<<"Data Top : "<<top->data<<endl;
	}
}
void printstack (){
	Element *bantu;
	if(isEmpty()){
		cout<<"Stack Kosong"<<endl;
	}
	else{
		bantu=top;
		while(bantu!=NULL){
			cout<<"|\t"<<bantu->data<<"\t|"<<endl;
			bantu=bantu->next;
		}
		cout<<endl;
	}
}
void menu(){
	int pilih;
	cout<<"=================================="<<endl;
	cout<<"==========|Menu Pilihan|=========="<<endl;
	cout<<"=================================="<<endl;
	cout<<"|  1. Push Data\t\t\t |"<<endl;
	cout<<"|\t\t\t\t |"<<endl;
	cout<<"|  2. Pop Data\t\t\t |"<<endl;
	cout<<"|\t\t\t\t |"<<endl;
	cout<<"|  3. Top Data\t\t\t |"<<endl;
	cout<<"=================================="<<endl;
	cout<<"Masukkan pilihan : ";
	cin>>pilih;

	switch(pilih){
		case 1:push();
			break;
		case 2:pop();
			break;
		case 3:getTop();
			break;
		default:
			cout<<"Pilihan Tidak Ada"<<endl;
	}
}
int main (){
	int i,pilih;
	cout<<"==========Membuat Stack Awal=========="<<endl;
	cout<<"Jumlah data yang ingin di masukkan :";
	cin>>i;
	for(int k=0;k<i;k++){
		push();
	}
	cout<<endl;
	printstack();
	cout<<endl<<endl;
	while(pilih>0){
		menu();
		cout<<endl;
		printstack();
		cout<<endl<<endl;
	}
	return 0;
}
