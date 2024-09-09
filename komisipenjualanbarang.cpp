#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	float jlhpenjualan, komisi1, komisi2, totalkomisi;
	char nsales[30];
	
	cout<<"Nama Sales : ";
	gets(nsales);
	
	cout<<"Jumlah Penjualan : ";
	cin>>jlhpenjualan;
	if(jlhpenjualan>=50000){
		komisi1=(50000*0.1);
		komisi2=(jlhpenjualan-50000)*0.15;
		totalkomisi=komisi1+komisi2;
	}else{
		komisi1=0;
		komisi2=0;
		totalkomisi=komisi1+komisi2;
	}
	cout<< "Komisi Sales : "<<nsales <<" Sebesar : ";
	cout<< "Rp"	<<totalkomisi;
	return 0;
}
