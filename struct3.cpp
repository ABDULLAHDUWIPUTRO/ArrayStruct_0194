#include <iostream>
#include <string>

using namespace std;

struct DetailAlamat {  //membuat struktur detail alamat
    string desa; //village
    string kota;//city
};

struct mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    mahasiswa mhs;
    cout << "nomor Mahasiswa : ";
    getline(cin, mhs.NIM);
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);
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

    return 0;
}