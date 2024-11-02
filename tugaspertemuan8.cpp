#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Mahasiswa {
	string npm, nama;
	float nilaiMid, nilaiSemester, nilaiAkhir, hitungNilaiAkhir;
	int totalData;
	char nilaiHuruf, tentukanNilaiHuruf;
};

hitungNilaiAkhir(float nilaiMid, float nilaiSemester){
	return (0.4 * nilaiMid) + (0.6 * nilaiSemester);
}

tentukanNilaiHuruf(float nilaiAkhir){
	if(nilaiAkhir >= 80) return 'A';
	else if(nilaiAkhir >= 70) return 'B';
	else if(nilaiAkhir >= 55) return 'C';
	else if(nilaiAkhir >= 40) return 'D';
	else return 'E';
}

int main(){
	Mahasiswa mhs[100];
	int i = 0;
	char entry = 'y';
	
	cout << endl;
	
	cout << "+-----------------------------------------------------------------------+" << endl;
	cout << "|			Data Nilai Ujian Pemrograman C++		|" << endl;	
	cout << "|			Dosen : Tribowo, S.Kom, SE			|" 	<< endl;
	cout << "+-----------------------------------------------------------------------+" << endl;

	while(entry == 'y' || entry == 'Y'){
		cout << "----------------|Data Mahasiswa|----------------" << endl;
		cout << "NPM" << setw(13) << right << ":"; cin >> mhs[i].npm;
		cout << "Nama" << setw(12) << right << ":"; cin >> mhs[i].nama;
		cout << "Nilai MID" << setw(7) << right << ":"; cin >> mhs[i].nilaiMid;
		cout << "Nilai Semester" << setw(2) << right << ":"; cin >> mhs[i].nilaiSemester;
		
		mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].nilaiMid,mhs[i].nilaiSemester);
		mhs[i].nilaiHuruf = tentukanNilaiHuruf(mhs[i].nilaiAkhir);
		
		cout << "Lanjutkan? (y/t)"; cin >> entry;
		
		i++;
		cout << endl << endl;
	}

	cout << "+-----+----------------+-----------------+-------------+----------------+-------------+\n";
	cout << "|" << setw(5) << left << "No."
		 << "|" << setw(16) << left << "NPM"
		 << "|" << setw(15) << left << "Nama"
		 << "|" << setw(12) << left << "Nilai MID"
		 << "|" << setw(14) << left << "Nilai Semester"
		 << "|" << setw(12) << left << "Nilai Akhir"
		 << "|" << setw(5) << left << "Huruf" << "|\n";
	cout << "+-----+----------------+-----------------+-------------+----------------+-------------+\n";
	
	for (int hasil = 0; hasil < i; hasil++){
		cout << "|" << setw(5) << left << hasil + 1
			 << "|" << setw(16) << mhs[hasil].npm
			 << "|" << setw(15) << mhs[hasil].nama
			 << "|" << setw(12) << mhs[hasil].nilaiMid
			 << "|" << setw(14) << mhs[hasil].nilaiSemester
			 << "|" << setw(12) << mhs[hasil].nilaiAkhir
			 << "|" << setw(5) << mhs[hasil].nilaiHuruf << "|\n";		 
	}
	
	cout << "+-----+----------------+-----------------+-------------+----------------+-------------+\n";
	
	cout << endl;
	cout << "Created by Tribowo";
	
	return 0;
}


