#include <iostream>
using namespace std;

class barang{
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
        void tampilSpek(){
          cout << "Nama Barang: " << nama << endl;
          cout << "Jumlah: " << jumlah << endl;
          cout << "Kategori: " << kategori << endl;
          cout << "Tanggal Produksi: " << tanggalProduksi << endl;
        }
};

int main(){

        barang elektronik;
        barang nonElektronik;

        elektronik.nama = "Laptop";
        elektronik.jumlah = 1;
        elektronik.kategori = "Elektronik";
        elektronik.tanggalProduksi = "1945-08-17";
        elektronik.tampilSpek();


        nonElektronik.nama = "supersemar";
        nonElektronik.jumlah = 1;
        nonElektronik.kategori = "Non-Elektronik";
        nonElektronik.tanggalProduksi = "1945-08-17";
        nonElektronik.tampilSpek();
}