#include<iostream>

using namespace std;

int main(){
	cout<<"========| GAJI KARYAWAN COY |========"<<endl<<endl;
	
	float jamkerja, jamlembur, gajiperjam, totalgaji;
	
	gajiperjam=500;
	// Input jumlah jam kerja
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamkerja;

    // Periksa jika jam kerja kurang dari 7 jam
    if (jamkerja < 7) {
        cout << "Tidak ada gaji karena jam kerja kurang dari 7 jam." << endl;
    } 
    // Periksa jika jam kerja lebih dari 7 jam
    else if (jamkerja > 7) {
        jamlembur = jamkerja - 7;
        // Hitung total gaji dengan lembur
        totalgaji = (7 * gajiperjam) + (jamlembur * gajiperjam * 1.5);
        cout << "Gaji per jam: " << gajiperjam << endl;
        cout << "Jumlah jam lembur: " << jamlembur << endl;
        cout << "Total gaji: " << totalgaji << endl;
    } 
    // Jika jam kerja sama dengan 7 jam
    else {
        totalgaji = 7 * gajiperjam;
        cout << "Gaji per jam: " << gajiperjam << endl;
        cout << "Jumlah jam lembur: 0" << endl;
        cout << "Total gaji: " << totalgaji << endl;
    }

    return 0;
}
