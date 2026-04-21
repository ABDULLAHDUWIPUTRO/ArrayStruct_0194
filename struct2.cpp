#include <iostream>
using namespace std;

struct DetailAlamat { //membuat struct detail alamat
    string desa;
    string kota;
};

struct mahasiswa { //membuat struktur mahasiswa
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){  //membuat int main untuk  i/o
    mahasiswa mhs;
    cout << "nomor Mahasiswa : ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << " \nNIM : " << mhs.NIM;
    cout << "Nama : " << mhs.nama;
    cout << "\nAlamat : ";
    cout << "\nDesa : "<< mhs.alamat.desa;
    cout << "\nKota :" << mhs.alamat.kota;
    cout << "Umur : " << mhs.umur;  
}