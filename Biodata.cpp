#include <iostream>
#include <string>
using namespace std;

int main(){
    string nama, namaBulan;
    string alamat, lahir;
    string jurusan, jenis, nim;
    int bulan, tanggal, tahun, jk;
    
    cout << "PROGRAM BIODATA MAHASISWA";
    cout << endl;
    cout << "*************************";
    cout << endl;
    
    // Data Inputan
    cout << "Nama Lengkap : "; 
    getline(cin, nama);
    cout << "Alamat : "; 
    getline(cin, alamat);
    cout << "Tempat Lahir : "; 
    getline(cin, lahir);
    cout << "Pilih Bulan Lahir (1 s/d 12) : "; cin >> bulan;
    
    if(bulan == 1){
        namaBulan = "Januari";
    }else if(bulan == 2){
        namaBulan = "Februari";
    }else if(bulan == 3){
       namaBulan = "Maret";
    }else if(bulan == 4){
        namaBulan = "April";
    }else if(bulan == 5){
        namaBulan = "Mei";
    }else if(bulan == 6){
        namaBulan = "Juni";
    }else if(bulan == 7){
        namaBulan = "Juli";
    }else if(bulan == 8){
        namaBulan = "Agustus";
    }else if(bulan == 9){
        namaBulan = "September";
    }else if(bulan == 10){
        namaBulan = "Oktober";
    }else if(bulan == 11){
        namaBulan = "November";
    }else if(bulan == 12){
        namaBulan = "Desember";
    }else{
        cout << "Pilihan tidak tersedia." << endl;
    }
    
    cout << "Tanggal berapa anda lahir : "; cin >> tanggal;
    cout << "Tahun berapa anda lahir : "; cin >> tahun; 
    cout << "nim : "; cin >> nim;
    cout << "Jurusan : "; 
    cin >> jurusan;
    cout << "Jenis Kelamin : "; cin >> jk;
    
    if(jk == 1){
        jenis = "Laki-Laki";
    }else if(jk == 2){
        jenis = "Perempuan";
    }else{
        cout << "Tidak ada Pilihan" << endl;
    }
    
    // Hasil Inputan
    cout << "Data Pribadi" << endl;
    cout << "*********************";
    cout << endl;
    // Hasil Inputan 2
    cout << "Nama Anda\t\t : " << nama;
    cout << endl;
    cout << "Alamat Anda\t\t : " << alamat;
    cout << endl;
    cout << "Tempat Lahir Anda\t : " << lahir;
    cout << endl;
    cout << "Tanggal Lahir Anda\t: " << tanggal << " " << namaBulan << " " << tahun << endl;
    cout << "Nim anda\t\t : " << nim << endl;
    cout << "Jurusan anda\t : " << jurusan << endl;
    cout << "Jenis Kelamin anda\t : " << jenis << endl;
    cout << "***********************";
    cout << endl;
    
    return 0;
}
