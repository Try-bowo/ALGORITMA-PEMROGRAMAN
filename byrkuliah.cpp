#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string nama[100],
		   jurusan[100],
		   kode[100];
	int	npm[100],
		awal[100],
		cicilan[100],
		besaran[100],
		uangKuliah[100],
		bayar[100],
		terbayar[100],
		sisa[100],
		i = 0;
	char entry = 'y';
		
	cout << setprecision(10);
	cout << "+----------------------------------------------------------+" << endl;
	cout << "|       PEMBAYARAN UANG KULIAH UNIVERSITAS TRIBUANA        |" << endl;
	cout << "+----------------------------------------------------------+\n" << endl;

	while(entry == 'Y' || entry == 'y')
	{
		cout << "-----------------Data Mahasiswa -------------------\n";
		cout << "Nama Mahasiswa" << ":"; cin >> nama[i];
		cout << "NPM" << ":"; cin >> npm[i];
		ulang:
		cout << "Kode Jurusan (SI/TI/KA/MI)" << ":"; cin >> kode[i];
		
		if(kode[i] == "SI" || kode[i] == "si")
		{
			jurusan[i] = "Sistem Informasi";
			awal[i] = 2100000;
			cicilan[i] = 7;
			besaran[i] = 300000;
			uangKuliah[i] = awal[i] + (cicilan[i] * besaran[i]);
		}		
		else if(kode[i] == "TI" || kode[i] == "ti")
		{
			jurusan[i] = "Teknik Informatika";
			awal[i] = 2500000;
			cicilan[i] = 7;
			besaran[i] = 300000;
			uangKuliah[i] = awal[i] + (cicilan[i] * besaran[i]);
		}		
		else if(kode[i] == "KA" || kode[i] == "ka")
		{
			jurusan[i] = "Komputer Akuntansi";
			awal[i] = 1750000;
			cicilan[i] = 6;
			besaran[i] = 200000;
			uangKuliah[i] = awal[i] + (cicilan[i] * besaran[i]);
		}		
		else if(kode[i] == "MI" || kode[i] == "mi")
		{
			jurusan[i] = "Manajemen Informatika";
			awal[i] = 1500000;
			cicilan[i] = 6;
			besaran[i] = 250000;
			uangKuliah[i] = awal[i] + (cicilan[i] * besaran[i]);
		}
		
		cout << "Jurusan" << ":" << jurusan[i] << endl;
		cout << "Pembayaran Awal" << ":Rp." << awal[i] << endl;
		cout << "Jumlah Cicilan" << ":" << cicilan[i] << endl;
		cout << "Besar Cicilan" << ":Rp." << besaran[i] << endl;
		
		cout << "Pembayaran Ke-" << ":"; cin >> bayar[i];
		
		if(bayar[i] <= cicilan[i])
		{
			terbayar[i] = awal[i] + (bayar[i] * besaran[i]);
			sisa[i] = uangKuliah[i] - terbayar[i];
		}
		else
		{
			terbayar[i] = uangKuliah[i];
			sisa[i] = 0;
		}
		
		cout << "Uang Kuliah" << ":Rp." << uangKuliah[i] << endl;
		cout << "Uang Kuliah Terbayar" << ":Rp." << terbayar[i] << endl;
		cout << "Sisa Uang Kuliah" << ":Rp." << sisa[i] << endl;
		
		cout << "Masih ingin menghitung [Y/T]" << ":"; cin >> entry;
		
		i++;
		
		cout << endl << endl;
	}
	
		
		cout << "+-----+-------------------------+---------------------+--------------------+--------------------+--------------------+\n";
		cout << "|" << setw(5) << left << "No." << "|" << setw(25) << "Mahasiswa" << "|" << setw(21) << "Jurusan" << "|" << setw(20) << "Uang Kuliah" << "|";
		cout << setw(20) << "Sudah Dibayar" << "|" << setw(20) << "Belum Dibayar" << "|\n";
		cout << "+-----+-------------------------+---------------------+--------------------+--------------------+--------------------+\n";
		
	for(int g=0; g < i; g++)
	{
		cout << "|" << setw(5) << left << g+1 << "|" << setw(25) << nama[g] << "|" << setw(21) << jurusan[g] << "|" << setw(20) << uangKuliah[g] << "|";
		cout << setw(20) << terbayar[g] << "|" << setw(20) << sisa[g] << "|\n";
	}
	
		cout << "+-----+-------------------------+---------------------+--------------------+--------------------+--------------------+\n";
	
	cout << "Created by Tribowo";
	return 0;
}
