#include <iostream>
using namespace std;

struct mahasiswa {
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main(){
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
    cout << "Alamat : " << mhs.alamat;
    cout << "Umur : " << mhs.umur;  
}