#include <iostream>
#include <string>

using namespace std;

struct DetailAlamat { //membuat struktur detail alamat
    string desa;
    string kota;
};

struct mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    mahasiswa mhs;
    cout << "nomor Mahasiswa = ";
    getline(cin, mhs.NIM);
    cout << "Nama Mahasiswa = ";
    getline(cin, mhs.nama)
    cout << "Alamat Mahasiswa : "; << endl;
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

    return
}