#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa; //village
    string kota;//city
};

struct mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){  //i/o dan cin
    mahasiswa mhs;
    cout << "nomor Mahasiswa : ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t nama desa: ";
    cin >> mhs.alamat.desa;
    cout << "\t nama kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << " \nNIM : " << mhs.NIM;
    cout << " \nNama : " << mhs.nama;
    cout << " \nAlamat : " ;
    cout << " \nDesa : " << mhs.alamat.desa;
    cout << " \nKota : " << mhs.alamat.kota;
    cout << " \nUmur : " << mhs.umur;  
}