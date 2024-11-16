#include <iostream>
#include <conio.h>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

struct Karyawan {
    string nama;
    int jamKerja;
    int jamLembur;
    float gajiPokok,
		  uangLembur,
		  uangMakan,
		  uangJasa,
		  gajiDiterima;
};

void garis();
float gaji_pk(int jamKerja), 
	  lembur(int jamKerja),
	  makan(int jamKerja),
	  jasa(int jamKerja);
	  
void inputData(string &nama, int &jamKerja);
void tampilkanHasil(string nama, int jamKerja, float gajipokok, float uangLembur, float uangMakan, float uangJasa, float gajiDiterima);
void tampilkanTabel(const vector<Karyawan> &karyawanList);

int main() {
    /* Cetak Judul Program */
    cout << "\n\n ================= | Program Gaji Karyawan PT Rezeki Nombok | ================= \n";
    
    vector<Karyawan> karyawanList;
    string nama;
    int jamKerja;
    char lanjut;
    
    while (1) {
        cout << "\n\n ---------Data Karyawan--------- \n";
        
        /* Input Data */
        inputData(nama, jamKerja);
        
        if (lanjut == 'T' || lanjut == 't') {
            break;
        }
        
        /* hitung Gaji */
        float gajipokok = gaji_pk(jamKerja), uangLembur = lembur(jamKerja), uangMakan = makan(jamKerja), uangJasa = jasa(jamKerja), gajiDiterima = gajipokok + uangLembur + uangMakan + uangJasa;

        // Simpan data karyawan
        Karyawan karyawan;
        karyawan.nama = nama;
        karyawan.jamKerja = jamKerja;
        karyawan.jamLembur = (jamKerja > 7) ? jamKerja - 7 : 0;
        karyawan.gajiPokok = gajipokok;
        karyawan.uangLembur = uangLembur;
        karyawan.uangMakan = uangMakan;
        karyawan.uangJasa = uangJasa;
        karyawan.gajiDiterima = gajiDiterima;

        karyawanList.push_back(karyawan);

        /* Tampilkan Hasil */
        tampilkanHasil(nama, jamKerja, gajipokok, uangLembur, uangMakan, uangJasa, gajiDiterima);
        
        cout << "\nLanjut? (Y/T): ";
        lanjut = getche();
        
        if (lanjut == 'T' || lanjut == 't')
            break;
    }

    // Menampilkan Tabel setelah keluar dari loop
    tampilkanTabel(karyawanList);
    
    return 0;
}


void inputData(string &nama, int &jamKerja) {
    cout << "\n Nama Karyawan: ";
    getline(cin, nama);
    
    cout << " Jam Kerja: ";
    cin >> jamKerja;
    cin.ignore();  // Untuk menghapus karakter newline setelah input jam kerja
}

float gaji_pk(int jamKerja) {
    if (jamKerja <= 7)
        return jamKerja * 2000;
    else
        return 7 * 2000; // Gaji pokok tetap dihitung 7 jam
}

float lembur(int jamKerja) {
    if (jamKerja > 7)
        return (jamKerja - 7) * 3000;
    else
        return 0;
}

float makan(int jamKerja) {
    if (jamKerja >= 10)
        return 2500;
    else if (jamKerja >= 8)
        return 1500;
    else
        return 0;
}

float jasa(int jamKerja) {
    if (jamKerja >= 9)
        return 3000;
    else
        return 0;
}

void tampilkanHasil(string nama, int jamKerja, float gajipokok, float uangLembur, float uangMakan, float uangJasa, float gajiDiterima) {
    cout << "\n\n" << nama << " bekerja selama " << jamKerja << " jam, maka :\n";
    
    cout << "Gaji Pokok : " << (jamKerja <= 7 ? jamKerja : 7) << " * 2000 = " << gajipokok << endl;
    cout << "Uang Lembur : " << (jamKerja > 7 ? jamKerja - 7 : 0) << " * 3000 = " << uangLembur << endl;
    cout << "Uang Makan : " << (jamKerja >= 8 ? (jamKerja >= 10 ? 2500 : 1500) : 0) << endl;
    cout << "Uang Jasa Lembur : " << (jamKerja >= 9 ? 3000 : 0) << endl;
    cout << "Gaji diterima : " << gajiDiterima << endl;
}

void tampilkanTabel(const vector<Karyawan> &karyawanList) {
    cout << "\n\nDaftar Karyawan PT Rejeki Nomplok\n";
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    cout << setw(5) << "No |" << setw(20) << "Nama |" << setw(12) << "Jam Kerja |" << setw(12) << "Jam Lembur |" 
         << setw(12) << "Gaji Pokok |" << setw(12) << "Uang Lembur |" << setw(12) << "Uang Makan |" 
         << setw(18) << "Uang Jasa Lembur |" << setw(15) << "Gaji Diterima |" << endl;
    
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    
    float totalGaji = 0;
    for (int i = 0; i < karyawanList.size(); i++) {
        const Karyawan &karyawan = karyawanList[i];
        cout << setw(3) << i + 1 <<" |" << setw(18) << karyawan.nama <<" |"<< setw(10) << karyawan.jamKerja <<" |"<< setw(10) << karyawan.jamLembur <<" |"
             << setw(10) << karyawan.gajiPokok <<" |" << setw(10) << karyawan.uangLembur <<" |"<< setw(11) << karyawan.uangMakan <<" |"
             << setw(16) << karyawan.uangJasa <<" |" << setw(13) << karyawan.gajiDiterima <<" |" << endl;
        totalGaji += karyawan.gajiDiterima;
    }
    
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    cout << "Total Gaji harus dibayar oleh Perusahaan: Rp. " << totalGaji << endl;
}

