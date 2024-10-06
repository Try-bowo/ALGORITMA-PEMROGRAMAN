#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Barang {
    string nama;
    double harga;
    int jumlah;
    
	double totalPendapatan() {
        return harga * jumlah;
    }
    
};

int main() {
    vector<Barang> daftarBarang;
    char pilihan;

    do {
        Barang b;

        cout << "Nama Barang: ";
        cin >> b.nama;
        cout << "Harga per Unit: ";
        cin >> b.harga;
        cout << "Jumlah Unit Terjual: ";
        cin >> b.jumlah;

        daftarBarang.push_back(b);

        cout << "Apakah ingin memasukkan data penjualan lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    // Menampilkan laporan
    cout << fixed << setprecision(2);
    cout << "\nLaporan Penjualan:\n";
    cout << "+--------------------------------------------------------------------------------+\n";
    cout << "|                                  UD TERPIMPIN                                  |\n";
    cout << "|----+---------------------+-----------------+-------------+---------------------|\n";
    cout << "| No | Nama Barang         | Harga per Unit  | Jlh Terjual | Total Pendapatan    |\n";
    cout << "|----|---------------------|-----------------|-------------|---------------------|\n";

    double totalPendapatanSemua = 0;
    for (size_t i = 0; i < daftarBarang.size(); i++) {
        double totalPendapatan = daftarBarang[i].totalPendapatan();
        cout << "| " << left << setw(2) << (i + 1) 
             << " | " << setw(19) << daftarBarang[i].nama 
             << " | " << setw(15) << daftarBarang[i].harga 
             << " | " << setw(11) << daftarBarang[i].jumlah 
             << " | " << setw(19) << totalPendapatan << " |\n";
        
        totalPendapatanSemua += totalPendapatan;
    }

    cout << "|----+---------------------+-----------------+-------------+---------------------|\n";
    cout << "| Total Pendapatan Keseluruhan: " << totalPendapatanSemua << "                   \n";

    return 0;
}

