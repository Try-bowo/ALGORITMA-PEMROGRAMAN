#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout<<"========| INSENTIF SALES PT MURAH MERIAH |========"<<endl<<endl;
	
	char namapegawai[10][25];
	int barang, jual[10],totalkomisi[10],hitbarang[10],komisi1[10],komisi2[10], i,pKomisiPerusahaan=0, jlhpegawai=10; //jlh pegawai ditentukan
	
	barang=500000;
	

	for(i=0; i<jlhpegawai; i++)
	{
		cout<<"Input Nama Pegawai : ";    cin>>namapegawai[i];
		cout<<"Masukkan jlh Jual : "; cin>>jual[i];
		cout<<"-----------------------"<<endl;
		
		if(jual[i]>=500000){
			komisi1[i]=(500000*0.1);
			komisi2[i]=(jual[i]-500000)*0.15;
			totalkomisi[i]=komisi1[i]+komisi2[i];
		}else{
			komisi1[i]=0;
			komisi2[i]=0;
			totalkomisi[i]=komisi1[i]+komisi2[i];
		}
	}
    
//    cout << "No\tNama\tKomisi\n";

    // Header tabel
    cout << endl;
    cout << "+-----+-------------------------+----------------+" << endl;
    cout << "| No  | Nama                    | Komisi         |" << endl;
    cout << "+-----+-------------------------+----------------+" << endl;

	
	for(i=0; i<jlhpegawai; i++)
	{
		//cout<< i+1 << ".\t" << namapegawai[i] << "\t" << totalkomisi[i] <<endl;
		
		cout << "| " << setw(2) <<i + 1 
             << "  | " << setw(23) << left << namapegawai[i] 
             << " | " << setw(14) << left << totalkomisi[i] << " |" << endl;
		
		pKomisiPerusahaan += totalkomisi[i];
	}
	
	cout << "+-----+-------------------------+----------------+" << endl << endl;
	cout<<"Total Pengeluaran Perusahaan : "<<pKomisiPerusahaan<<endl;
	
    
	cin.ignore(); //berfungsi mengosongkan memory buffer dikarenakan kita akan terus mengisi jadi memory mesti kita kosongkan    

    return 0;
}
