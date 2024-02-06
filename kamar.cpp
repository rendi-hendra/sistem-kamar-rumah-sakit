#include <iostream>
using namespace std;

int main () {
    // Inisialisasi Array dan Variabel
    string nomer_kamar[5] = {"306", "100", "345", "205", "666"}, umur[5], menginap[5];
    string nama[5], user_input, jenis_kelamin[5];
    int index = 0;

    cout<<"========Rumah Sakit Anwar Medika==========="<<endl;
	cout<<"        Masukkan Data Anda Dibawah          "<<endl;
    cout << endl;

    // Perulangan
    while(true) {
        cout << "Printah(tambah, cari, list, exit): ";
        cin >> user_input;
        // Tambah Kamar
        // Percabangan
        if(user_input == "tambah"){
            cout << "Nomer Kamar: " << nomer_kamar[index] << endl;
            cout << "Masukan Nama: ";
            cin >> nama[index];
            cout << "Masukan Umur: ";
            cin >> umur[index];
            cout << "Masukan Jenis Kelamin(L/P): ";
            cin >> jenis_kelamin[index];
            cout << "Masukan Lama Menginap: ";
            cin >> menginap[index];
            cout << "Kamar Berhasil Di Tambahkan" << endl;
            cout << endl;
            index += 1;

            // Cari nomer kamar
        }else if(user_input == "cari") {
            string input_cari;
            cout << "Masukan Nomer Kamar: ";
            cin >> input_cari;

            // Perulangan
            for(int i = 0; i < 5; i++) {
                if(nomer_kamar[i] == input_cari && nama[i] != "") {
                    cout << "Nomer Kamar: " << nomer_kamar[i] << endl;
                    cout << "Nama: " << nama[i] << endl;
                    cout << "Umur: " << umur[i] << " Tahun" << endl;
                    if(jenis_kelamin[i] == "l" || jenis_kelamin[i] == "L"){
                        cout << "Jenis Kelamin: " << "Laki-Laki" << endl;
                    }else if(jenis_kelamin[i] == "p" || jenis_kelamin[i] == "P"){
                        cout << "Jenis Kelamin: " << "Perempuan" << endl;
                    }
                    cout << "Menginap: " << menginap[i] << " Hari" << endl;
                    cout << endl;
                    break;
                }else if(nomer_kamar[i] != input_cari && nama[i] == "") {
                    cout << "Kamar Kosong" << endl;
                    cout << endl;
                    break;
                }
            }

            // Cek kamar kosong apa tidak
        } else if(user_input == "list") {
            for(int i = 0; i < 5; i++) {
                if(nama[i] != "") {
                    cout << nomer_kamar[i] << " Ada" << endl;
                }else if(nama[i] == "") {
                    cout << nomer_kamar[i] << " Kosong" << endl;
                }
            }

            // Keluar dari program
        }else if(user_input == "exit") {
            break;
        }else{
            cout << "Input Yang Anda Masukan Tidak Valid" << endl;
            cout << endl;
        }
    }

    return 0;
}
