#include<iostream>

using namespace std;
int main()
{
	int detik, menit, jam, hari;
	cout<<"\n\nProgram Konversi detik ke Hari, Jam, Menit & Detik"<<endl;
	cout<<"\n Masukkan detik : "; cin>> detik;
	hari=detik/86400;
	jam=detik/3600;
	menit=detik/60;
	detik=detik/1;
	cout<<"\n Konversi Waktu Tersebut Adalah"<<endl;
	cout<<" hari : "<<hari<<endl;
	cout<<" jam : "<<jam<<endl;
	cout<<" menit : "<<menit<<endl;
	cout<<" detik : "<<detik<<endl;
}
