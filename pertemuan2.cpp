#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	char nmmhs[30],nim[15];
	float jlhbrg, hrg, totalhrg;
	
	cout<<setprecision(13);
	cout<<"Nama Mahasiswa = ";
	cin>>nmmhs;
	
	cout<<"NIM = ";
	cin>>nim;
	
	cout<<"Jlh Barang = ";
	cin>>jlhbrg;
	
	cout<<"Harga = ";
	cin>>hrg;
	
	totalhrg=jlhbrg*hrg;
	cout<<totalhrg;
	
	return 0;
}
