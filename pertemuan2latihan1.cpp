#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	char nmpegawai[30],jabatan[15];
	float gaji,pajak, pinjaman, gajibersih;
	
	cout<<setprecision(13);
	
	cout<<"Nama Pegawai = ";
	cin>>nmpegawai;
	
	cout<<"Jabatan = ";
	cin>>jabatan;
	
	cout<<"Gaji = ";
	cin>>gaji;
	
	pajak=gaji*0.15;
	cout<<"Pajak = "<< pajak<<endl;
	
	cout<<"Pinjaman = ";
	cin>>pinjaman;
	
	gajibersih=gaji-(pinjaman+pajak);
	cout<<gajibersih;
	
	return 0;
}
