#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	char nmbarang[30];
	float harga,jlhjual, totalharga, diskon, totalbayar;
	
	cout<<setprecision(13);
	
	cout<<endl<<" =======/KASIR INDORAMET/======= "<<endl<<endl;
	
	cout<<"Nama Barang = ";
	cin>>nmbarang;
	
	cout<<"Harga = ";
	cin>>harga;
	
	cout<<"Jumlah Jual = ";
	cin>>jlhjual;
	
	totalharga=harga*jlhjual;
	cout<<"Total Harga = "<<totalharga<<endl;
	
	diskon=totalharga*0.1;
	cout<<"Diskon = "<< diskon<<endl;
	
	totalbayar=totalharga-diskon;
	cout<<"Total Bayar = " << totalbayar;
	
	return 0;
}
