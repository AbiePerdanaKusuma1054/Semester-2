/*
Anggota Kelompok:
Ridho Alrafi 1817051009
Eggy Bintang Negara 1817051013
Yuan Ferdinand A. Kailuhu 1817051014
Abie Perdana Kusuma 1817051054
*/

#include <iostream>
using namespace std;

struct node{
  int data;
  node *next;
};

node *head=NULL;

bool isEmpty(){
  return head==NULL;
}

void listdata(){
  node *baru, *bantu;
  baru=new node;
  cout<<"Masukkan data: ";
  cin>>baru->data;
  baru->next=NULL;
  
  if(isEmpty()){
    head=baru;
  }
  else{
    bantu=head;
    while(bantu->next!=NULL){
      bantu=bantu->next;
    }
    bantu->next=baru;
  }
}

void depan(){
  node *baru;
  baru=new node;
  cout<<"Masukkan data: ";
  cin>>baru->data;
  baru->next=NULL;
  
  if(isEmpty()){
    head=baru;
  }
  else{
    baru->next=head;
    head=baru;
  }
}

void belakang(){
  node *baru, *bantu;
  baru=new node;
  cout<<"Masukkan data: ";
  cin>>baru->data;
  baru->next=NULL;
  
  if(isEmpty()){
    head=baru;
  }
  else{
    bantu=head;
    while(bantu->next!=NULL){
      bantu=bantu->next;
    }
    bantu->next=baru;
  }
}

void hapusdepan(){
  node *baru;
  baru=head;
  head=head->next;
  delete baru;
}

void hapusbelakang(){
  node *baru, *bantu;
  baru=head;
  
  if(baru->next==NULL){
    delete baru;
    head=NULL;
  }
  else{
    while(baru->next!=NULL){
      bantu=baru;
      baru=baru->next;
    }
    delete baru;
    bantu->next=NULL;
  }
}

void sisip(){
  node *baru, *bantu;
  int posisi;
  
  if(head!=NULL){
    cout<<"Sisip setelah data ke? : ";
    cin>>posisi;
    baru=new node;
    bantu=head;
    
    for(int i=0;i<posisi-1;i++){
      
      if(bantu->next!=NULL){
        bantu=bantu->next;
      }
      else{
        break;
      }
    }
    cout<<"Masukkan data : ";
     cin>>baru->data;
    baru->next=bantu->next;
    bantu->next=baru;
  }
  else{
    cout<<"Tidak ada data";
  }
}       

void hapussisip(){
  node *bantu, *hapus;
  int hapusposisi;
  
  if(head!=NULL){
    cout<<"hapus data ke : ";
    cin>>hapusposisi;
    bantu=head;
    
    for(int i=1;i<hapusposisi-1;i++){
      
      if(bantu->next!=NULL){
        bantu=bantu->next;
      }
      else{
        break;
      }
    }
    hapus=bantu->next;
    bantu->next=hapus->next;
    delete hapus;
  }
  else{
    cout<<"Tidak ada data";
  }
}
        
void cetak(){
  node *bantu;
  
  if(isEmpty()){
    cout<<"List Kosong";
  }
  else{
    bantu=head;
    cout<<"\n[ ";
    while(bantu!=NULL){
      cout<<bantu->data<<" ";
      bantu=bantu->next;
    }
    cout<<"]"<<endl<<endl;
  }
}

void menu(){
  int pilih;
  cout<<"=================================="<<endl;
  cout<<"==========|Menu Pilihan|=========="<<endl;
  cout<<"=================================="<<endl;
  cout<<"|  1. Tambah data didepan        |"<<endl;
  cout<<"|  2. Tambah data dibelakang     |"<<endl;
  cout<<"|  3. Hapus data didepan         |"<<endl;
  cout<<"|  4. Hapus data dibelakang      |"<<endl;
  cout<<"|  5. Menyisipkan data           |"<<endl;
  cout<<"|  6. Menghapus data ke          |"<<endl;
  cout<<"=================================="<<endl;
  cout<<"Masukkan pilihan : ";
  cin>>pilih;
  
  switch(pilih){
    case 1:depan();
      break;
    case 2:belakang();
      break;
    case 3:hapusdepan();
      break;
    case 4:hapusbelakang();
      break;
    case 5:sisip();
      break;
    case 6:hapussisip();
      break;
    default:
      cout<<"Pilihan salah"<<endl;
  }
}

 int main (){
  int x;
   cout<<"Jumlah data : ";
   cin>>x;
   for(int i=0;i<x;i++){
     listdata();
   }
   cetak();
   for(int i=0;i<20;i++){
     menu();
     cetak();
   }
   
  return 0;
}
