#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string nama[100],
		   jurusanklh[100],
		   kodeJ[100];
	int	npm[100],
		awalbyr[100],
		cicilanklh[100],
		besaran[100],
		uangklh[100],
		bayar[100],
		sdhbayar[100],
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
		cout << "kodeJ jurusanklh (SI/TI/KA/MI)" << ":"; cin >> kodeJ[i];
		
		if(kodeJ[i] == "SI" || kodeJ[i] == "si")
		{
			jurusanklh[i] = "Sistem Informasi";
			awalbyr[i] = 2100000;
			cicilanklh[i] = 7;
			besaran[i] = 300000;
			uangklh[i] = awalbyr[i] + (cicilanklh[i] * besaran[i]);
		}		
		else if(kodeJ[i] == "TI" || kodeJ[i] == "ti")
		{
			jurusanklh[i] = "Teknik Informatika";
			awalbyr[i] = 2500000;
			cicilanklh[i] = 7;
			besaran[i] = 300000;
			uangklh[i] = awalbyr[i] + (cicilanklh[i] * besaran[i]);
		}		
		else if(kodeJ[i] == "KA" || kodeJ[i] == "ka")
		{
			jurusanklh[i] = "Komputer Akuntansi";
			awalbyr[i] = 1750000;
			cicilanklh[i] = 6;
			besaran[i] = 200000;
			uangklh[i] = awalbyr[i] + (cicilanklh[i] * besaran[i]);
		}		
		else if(kodeJ[i] == "MI" || kodeJ[i] == "mi")
		{
			jurusanklh[i] = "Manajemen Informatika";
			awalbyr[i] = 1500000;
			cicilanklh[i] = 6;
			besaran[i] = 250000;
			uangklh[i] = awalbyr[i] + (cicilanklh[i] * besaran[i]);
		}
		
		cout << "jurusanklh" << ":" << jurusanklh[i] << endl;
		cout << "Pembayaran awalbyr" << ":Rp." << awalbyr[i] << endl;
		cout << "Jumlah cicilanklh" << ":" << cicilanklh[i] << endl;
		cout << "Besar cicilanklh" << ":Rp." << besaran[i] << endl;
		
		cout << "Pembayaran Ke-" << ":"; cin >> bayar[i];
		
		if(bayar[i] <= cicilanklh[i])
		{
			sdhbayar[i] = awalbyr[i] + (bayar[i] * besaran[i]);
			sisa[i] = uangklh[i] - sdhbayar[i];
		}
		else
		{
			sdhbayar[i] = uangklh[i];
			sisa[i] = 0;
		}
		
		cout << "Uang Kuliah" << ":Rp." << uangklh[i] << endl;
		cout << "Uang Kuliah sdhbayar" << ":Rp." << sdhbayar[i] << endl;
		cout << "Sisa Uang Kuliah" << ":Rp." << sisa[i] << endl;
		
		cout << "Masih ingin menghitung [Y/T]" << ":"; cin >> entry;
		
		i++;
		
		cout << endl << endl;
	}
	
		
		cout << "+-----+-------------------------+---------------------+--------------------+--------------------+--------------------+\n";
		cout << "|" << setw(5) << left << "No." << "|" << setw(25) << "Mahasiswa" << "|" << setw(21) << "jurusanklh" << "|" << setw(20) << "Uang Kuliah" << "|";
		cout << setw(20) << "Sudah Dibayar" << "|" << setw(20) << "Belum Dibayar" << "|\n";
		cout << "+-----+-------------------------+---------------------+--------------------+--------------------+--------------------+\n";
		
	for(int g=0; g < i; g++)
	{
		cout << "|" << setw(5) << left << g+1 << "|" << setw(25) << nama[g] << "|" << setw(21) << jurusanklh[g] << "|" << setw(20) << uangklh[g] << "|";
		cout << setw(20) << sdhbayar[g] << "|" << setw(20) << sisa[g] << "|\n";
	}
	
		cout << "+-----+-------------------------+---------------------+--------------------+--------------------+--------------------+\n";
	
	cout << "Created by Tribowo";
	return 0;
}
