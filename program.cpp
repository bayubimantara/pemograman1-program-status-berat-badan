/**
	Terimakasih kepada allah swt dan kedua orang tua yang telah mendukung saya.
	
	===========================================
	Dibuat oleh: Bayu Bimantara
	Tanggal dibuat: 6/11/2015
	Nama program: Program status berat badan
	===========================================
**/

//Panggil librari iostream, untuk menggunakan fungsi input dan output.
#include <iostream>

//code ini penting, tapi saya belum tahu apa fungsinya.
using namespace std;

int main(int argc, char** argv) {
	
	//Deklarasikan varibel dengan tipe data yang sesuai
	int berat_badan;
	string status, nama;
	
	//Mulai input dan output
	cout<<"==============================================================="<<endl;
	cout<<"Selamat datang di program status berat badan"<<endl;
	cout<<"Program ini dibuat, supaya mengetahui status berat badan anda"<<endl;
	cout<<"==============================================================="<<endl;
	cout<<""<<endl;
	cout<<"Masukan nama anda :";
	cin>>nama;
	cout<<"Masukan berat badan anda :";
	cin>>berat_badan;
	
	//Proses logika
	if(berat_badan>=55){
		status = "Gemuk";
	}else if(berat_badan>=45 && berat_badan<=55){
		status = "Ideal";
	}else if(berat_badan<45){
		status = "Kurus";
	}
	
	//Output hasil akhir
	cout<<"Nama anda :"<<nama<<endl;
	cout<<"Berat badan anda :"<<berat_badan<<endl;
	cout<<"Status berat badan anda :"<<status<<endl;	
	
	return 0;
}
