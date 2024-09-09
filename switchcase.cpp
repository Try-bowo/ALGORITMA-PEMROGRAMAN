#include<iostream>

using namespace std;

int main(){
	int item;
	
	cout<<"Masukan Nama Item yang kamu pilih : "<<endl;
	cout<<"1. Pisang \n "<<endl;
	cout<<"2. Tahu Balado \n"<<endl;
	cout<<"========================="<<endl;
	cin >> item;
	
	switch(item){
		case 1:
			cout<<"kamu memilih \"pisang\" dan menu yang akan dibuat adalah Pisang Goreng";
			break;
			
		case 2:
			cout<<"kamu memilih \" "<<item <<"\" dan menu yang akan dibuat adalah Tahu Balado";
			break;
			
		default:
			cout<<"Menu yang kamu pilih belum ada di sistem, Silahkan pilih menu yang lain.";
			break;
	}
	
	return 0;
}
