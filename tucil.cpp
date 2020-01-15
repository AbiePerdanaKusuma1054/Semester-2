/*#include <iostream>
using namespace std;
class identitas {
	public:
		char nama [20];
		char norek [20];
		char transaksi;
		int nominal;
};
void menu (){
	cout<<"\n\t\t ===========================";
    cout<<"\n\t\t ||  PROGRAM ANTRIAN BANK  ||";
    cout<<"\n\t\t ==========================="<<endl<<endl;
    cout<<"1. Masukan Antrian"<<endl;
    cout<<"2. Proses Antrian"<<endl;
    cout<<"3. Keluar"<<endl;
    cout<<endl;
    cout<<"Masukkan pilihan Anda (@ angka)\t= ";
}
int main()
{
	identitas id[15];
	char pil;
	int x=0,hapus=0,cek=0;
	do{
		system("cls");
		menu ();
		cin>>pil;
		if (pil=='1'){
			system("cls");
			cin.ignore();
            cout<<"Nama Nasabah\t: ";
            cin.getline(id[x].nama,20);
            cout<<"Nomor Rekening\t: ";
            cin>>id[x].norek;
            ulang:
            cout<<"Jenis Transaksi\t: \n";
            cout<<"\t  A.Debet\n";
            cout<<"\t  B.Kredit\n"<<"Pilih\t: ";
            cin>>id[x].transaksi;
            if((id[x].transaksi)=='A'||(id[x].transaksi)=='a'||(id[x].transaksi)=='B'||(id[x].transaksi)=='b')
			{
				cout<<"Jumlah Transaksi :";
				cin>>id[x].nominal;
			}
			else{
				cout<<"Tidak ada transaksi pilihan anda\n";
				goto ulang;
			}
			cout<<endl;
            x++;
            system("cls");
            cout<<"Data Antrian saat ini\t:\n\n";
			for(int i=0;i<x;i++){
				cout<<"Nomor Antri\t: "<<i+1;
                cout<<endl;
                cout<<"Nama Nasabah\t: "<<id[i].nama<<endl;
                cout<<"Nomor Rekening\t: "<<id[i].norek<<endl;
                cout<<"Jenis Transaksi\t: ";
                if((id[i].transaksi)=='A'||(id[i].transaksi)=='a')
                {
                    cout<<"Debet\n";
                }
                else if((id[i].transaksi)=='B'||(id[i].transaksi)=='b')
                {
                    cout<<"Kredit\n";
        		}
                cout<<"Nominal\t\t: "<<id[i].nominal<<endl;
                cout<<endl<<endl;
			}
			system("PAUSE");
		}
		
		else if(pil=='2'){
			if(x==0){
				cout<<"Antrian Masih Kosong !\n";
			}
			else
            {
                for(int j=cek;j<x;j++){
	                system("cls");
                	cout<<"\nAntrian dengan nomor"<<j+1<<"diproses\n";
                	cout<<"\n\t\tData Nasabah \n\n";
	               	cout<<"Nama Nasabah\t: "<<id[j].nama<<endl;
    	            cout<<"Nomor Rekening\t: "<<id[j].norek<<endl;
        	        cout<<"Jenis Transaksi\t: "<<id[j].transaksi<<endl;
            	    cout<<"Nominal\t\t: "<<id[j].nominal<<endl;
                	cout<<endl;
                   	cout<<"Nomor Antiran Saat Ini :";
					for(int k=hapus;k<x;k++){
						cout<<" | ";
		                cout<<" "<<k+1;
		                cout<<" | ";
					}
					hapus++;
					cek++;
					cout<<endl;
					system ("PAUSE");
            	}
			}
			cout<<endl<<endl;
        	system("PAUSE");
		}
	}while(pil!='3');
}*/
#include <iostream>
using namespace std;
class identitas {
	public:
		char nama [20];
		char norek [20];
		char transaksi;
		int nominal;
};
void admin (){
	char adm []="ADMIN : RIKA NINGTIAS AZHARI";
	char *ptradm = adm;
	for (int i=0;i<28;i++)
	cout<< *(ptradm+i);
}
void menu (){
	cout<<"\n\t\t ==================================";
    cout<<"\n\t\t ||  PROGRAM ADMIN ANTRIAN BANK  ||";
    cout<<"\n\t\t =================================="<<endl<<endl;
    admin ();
    cout<<"\n";
	cout<<"1. Masukan Antrian"<<endl;
    cout<<"2. Proses Antrian"<<endl;
    cout<<"3. Keluar"<<endl;
    cout<<endl;
    cout<<"Masukkan pilihan Anda (@ angka)\t= ";
}

int main()
{
	identitas id[15];
	char pil;
	int x=0,hapus=0,cek=0;
	do{
		system("cls");
		menu ();
		cin>>pil;
		if (pil=='1'){
			system("cls");
			admin ();
			cout<<"\n";
			cin.ignore();
            cout<<"Nama Nasabah\t: ";
            cin.getline(id[x].nama,20);
            cout<<"Nomor Rekening\t: ";
            cin>>id[x].norek;
            ulang:
            cout<<"Jenis Transaksi\t: \n";
            cout<<"\t  A.Debet\n";
            cout<<"\t  B.Kredit\n"<<"Pilih\t: ";
            cin>>id[x].transaksi;
            if((id[x].transaksi)=='A'||(id[x].transaksi)=='a'||(id[x].transaksi)=='B'||(id[x].transaksi)=='b')
			{
				cout<<"Jumlah Transaksi :";
				cin>>id[x].nominal;
			}
			else{
				cout<<"Tidak ada transaksi pilihan anda\n";
				goto ulang;
			}
			cout<<endl;
            x++;
            cout<<"Tekan ENTER Untuk Menyimpan Data\n";
            system("PAUSE");
            system("cls");
			
			
			for(int j=1;j<=10;j++){
				system("cls");
				cout<<"LOADING MENYIMPAN DATA "<<j*10<<"%";
				system("cls");
			}
			
			admin ();
			cout<<"\n";
            cout<<"Data Antrian saat ini\t:\n\n";
			for(int i=0;i<x;i++){
				cout<<"Nomor Antri\t: "<<i+1;
                cout<<endl;
                cout<<"Nama Nasabah\t: "<<id[i].nama<<endl;
                cout<<"Nomor Rekening\t: "<<id[i].norek<<endl;
                cout<<"Jenis Transaksi\t: ";
                if((id[i].transaksi)=='A'||(id[i].transaksi)=='a')
                {
                    cout<<"Debet\n";
                }
                else if((id[i].transaksi)=='B'||(id[i].transaksi)=='b')
                {
                    cout<<"Kredit\n";
        		}
                cout<<"Nominal\t\t: "<<id[i].nominal<<endl;
                cout<<endl<<endl;
			}
			system("PAUSE");
		}
		
		else if(pil=='2'){
			if(x==0){
				cout<<"Antrian Masih Kosong !\n";
			}
			else
            {
                for(int j=cek;j<x;j++){
	                system("cls");
                	admin ();
					cout<<"\n";
					cout<<"\nAntrian dengan nomor "<<j+1<<" diproses\n";
                	cout<<"\nData Nasabah \n\n";
	               	cout<<"Nama Nasabah\t: "<<id[j].nama<<endl;
    	            cout<<"Nomor Rekening\t: "<<id[j].norek<<endl;
        	        cout<<"Jenis Transaksi\t: ";
        	        if((id[j].transaksi)=='A'||(id[j].transaksi)=='a')
	                {
	                    cout<<"Debet\n";
	                }
	                else if((id[j].transaksi)=='B'||(id[j].transaksi)=='b')
	                {
	                    cout<<"Kredit\n";
	        		}
            	    cout<<"Nominal\t\t: "<<id[j].nominal<<endl;
                	cout<<endl;
                   	cout<<"Nomor Antiran Saat Ini :";
					for(int k=hapus;k<x;k++){
						cout<<" | ";
		                cout<<" "<<k+1;
		                cout<<" | ";
					}
					hapus++;
					cek++;
					cout<<endl;
					system ("PAUSE");
            	}
			}
			cout<<endl<<endl;
        	system("PAUSE");
		}
	}while(pil!='3');
}

