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
    
string pilihan;
    cout << "pilih Tas : "; cin >> pilihan;
    //
    if (pilihan== "TasGunung"){
    	 cout << "Tas Gunung : "<<endl;
    	 cout << "Harga tas : "<<(TasGunung.harga)<<endl;
         cout << "Ukuran Tas = "<<(TasGunung.JumlahTas)<<" pics "<<endl;
         cout << "Merek Tas =  "<<(TasGunung.merek)<<endl;
    TasGunung.Fungsi("Membawa Perlengkapan Hiking");
    TasGunung.Ketahanan("Mampu membawa beban  max 50kg");
    TasGunung.Bahan("Polyester Nyilon ");
    //
	}else if(pilihan=="TasKerja"){
		 cout << "Tas Kerja : "<<endl;
		 cout << "Harga tas : "<<(TasKerja.harga)<<endl;
   		 cout << "Ukuran Tas = "<<(TasKerja.JumlahTas)<<" pics "<<endl;
    	 cout << "Merek Tas =  "<<(TasKerja.merek)<<endl;
    TasKerja.Fungsi("Membawa Perlengkapan kerja,Laptop DLL");
    TasKerja.Ketahanan("Mampu memuat Beban  max 10kg");
	TasKerja.Bahan("kulit,denim,kanvas");
	//
	}else if(pilihan=="TasSekolah"){
		cout << "Tas Sekolah: "<<endl;
		cout << "Harga tas : "<<(TasSekolah.harga)<<endl;
        cout << "Ukuran Tas = "<<(TasSekolah.JumlahTas)<<" pisc "<<endl;
        cout << "Merek Tas =  "<<(TasSekolah.merek)<<endl;
        
    TasSekolah.Fungsi("Membawa Perlengkapan Sekolah,Laptop,Alat Tulis DLL");
    TasSekolah.Ketahanan("Mampu memuat Beban max 5kg");
    TasSekolah.Bahan("Polyester,nyilon");
	}else
	{
		cout<< "Nama Yang Anda Masukan Kurang Tepat";
	}
	
   
    
 	
 }
