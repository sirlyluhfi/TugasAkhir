#include <iostream>
#include <string>


 using namespace std;

class Tas{
	public:
		int JumlahTas;
		string harga;
		string merek;
		void Fungsi(string kegunaan);
		void Ketahanan(string Beban);
		void Bahan(string material);
		
};
 void Tas::Fungsi(string kegunaan) {
 	cout << "Fungsi tas : "<< kegunaan <<endl;
}

void Tas::Ketahanan(string Beban) {
 	cout << "Beban yang mampu di bawa : "<< Beban <<endl;
}
void Tas ::Bahan(string material){
	cout << "Bahan pembuatan : "<< material<<endl;
}

 int main(){
 	// membuat objek class
  Tas  TasGunung,TasKerja,TasSekolah;
    // memberi nilai
     //TasGuunung
    TasGunung.harga = "500.000-5.000.000" ;
    TasGunung.JumlahTas = 100;
    TasGunung.merek = "Mammoth";
    //TasKerja
    TasKerja.harga = "200.000-1.000.000" ;
    TasKerja.JumlahTas = 100 ;
    TasKerja.merek = "Crocodle";
    //TasSekolah
    TasSekolah.harga = "100.000-500.000";
    TasSekolah.JumlahTas = 100;
    TasSekolah.merek = "eiger";
