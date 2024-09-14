#include <iostream>
using namespace std;

int main() {
	//VARIABEL
    char tiperumah, jenispembayaran;
    int hargatunai, angsuranperbulan, totalhargarumah;

    // Input dari pengguna
    cout << "==========| PT Perumahan Rakyat |==========" << endl;
    cout << "--------|Rumah idamanmu ada di Tri|-------" << endl << endl;
    cout << "Masukkan Tipe Rumah (A/B/C/D): ";
    cin >> tiperumah;
    cout << "Masukkan Jenis Pembayaran (T untuk Tunai, K untuk Kredit): ";
    cin >> jenispembayaran;

    // Menentukan harga rumah dan angsuran per bulan
    switch (tiperumah) {
        case 'A': //Untuk inputan menggunakan kapital
        case 'a': //Untuk inputan menggunakan kecil
            hargatunai = 50000000;
            angsuranperbulan = 500000;
            break;
            
        case 'B': //Untuk inputan menggunakan kapital
        case 'b': //Untuk inputan menggunakan kecil
            hargatunai = 75000000;
            angsuranperbulan = 750000;
            break;
            
        case 'C': //Untuk inputan menggunakan kapital
        case 'c': //Untuk inputan menggunakan kecil
            hargatunai = 85000000;
            angsuranperbulan = 850000;
            break;
            
        case 'D': //Untuk inputan menggunakan kapital
        case 'd': //Untuk inputan menggunakan kecil
            hargatunai = 100000000;
            angsuranperbulan = 1000000;
            break;
            
        default:
            cout << "Tipe rumah tidak valid!" << endl;
            return 1;
    }

    // Menghitung total harga rumah berdasarkan jenis pembayaran
    // T kapital untuk inputan huruf kapital(T) t kecil untuk inputan huruf kecil(t)
    if (jenispembayaran == 'T' || jenispembayaran == 't') 
	{
        totalhargarumah = hargatunai;
    }
	// T kapital untuk inputan huruf kapital(T) t kecil untuk inputan huruf kecil(t) 
	else if (jenispembayaran == 'K'|| jenispembayaran == 'k') 
	{
        totalhargarumah = 12 * angsuranperbulan * 10;
    } 
	else
	{
        cout << "Jenis pembayaran tidak valid!" << endl;
        return 1;
    }

    // Output hasil
    cout << "Total Harga Rumah: Rp " << totalhargarumah << endl;

    return 0;
}

