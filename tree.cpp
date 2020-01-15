#include <iostream>
using namespace std;

struct Node{
      int data;
      Node *child;
      Node *sibling;
};


void tambah(Node **bantu, int databaru)
{
      if(*bantu == NULL)
      {
            Node *baru;
            baru = new Node;
            baru->data = databaru;
            baru->child = NULL;
            baru->sibling = NULL;
            (*bantu)= baru;
            (*bantu)->child = NULL;
            (*bantu)->sibling = NULL;
            cout<<"Data bertambah!";
            
      }
      else if(databaru<(*bantu)->data)
            tambah(&(*bantu)->child, databaru);
      else if(databaru>(*bantu)->data)
            tambah(&(*bantu)->sibling, databaru);
      else if(databaru == (*bantu)->data)
            cout<<"Data sudah ada!";
    
}
void inOrder(Node *root)
{
      if(root != NULL){
            inOrder(root->child);
            cout<<root->data<<" ";
            inOrder(root->sibling);
      }
}
int main()
{
    int pilihan, data;
    Node *pohon;
    do
    {
        system("cls");
        cout<<"====== Tree ======\n";
        cout<<"==================";
        cout<<"\nMENU";
        cout<<"\n----\n";
        cout<<"1. Tambah Data\n";
        cout<<"2. Lihat Data in-order\n";
        cout<<"3. Exit\n";
        cout<<"Pilihan : ";
        cin>>pilihan;
        switch(pilihan)
        {
        case 1 :
        	cout<<"\nINPUT : ";
            cout<<"\n-------";
            cout<<"\nData baru : ";
            cin>>data;
            tambah(&pohon, data);
            break;
        case 2 :
            cout<<"\nOUTPUT IN ORDER : ";
            cout<<"\n------------------\n";
            if(pohon!=NULL)
            inOrder(pohon);
            else
            cout<<"Masih kosong!";
            break;
        }
    cout<<endl;
    system ("PAUSE");
	}while(pilihan != 3);
    return 0;
}
