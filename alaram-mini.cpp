#include <iostream>
using namespace std;




int main () {

double pagi  =  06.00; 
double siang =  12.00;
double sore  =  15.00;
double malam =  19.00;
double malam2 = 01.00;


double waktu ;

cout << "jam berapa sekarang ?";
cin >> waktu ;

if(waktu > 24 || waktu < 0) {
	cout << "jam mulai dari 00.00 - 23.59 \n masukan waktu yang benar\n";
	cin >> waktu ;
}else if (waktu < siang && waktu >= pagi) {
	cout << "selamat pagi, jangan lupa untuk sarapan." ;
}else if (waktu < sore && waktu >= siang) {
	cout << "selamat siang, waktunya untuk makan siang/istirahat siang." ;
}else if (waktu < malam && waktu >= sore) {
	cout << "selamat sore, jangan lupa untuk membersihkan diri." ;
}else if (waktu >= malam){
	cout << "selamat malam, selamat beristirahat malam." ;
}else if (waktu < pagi && waktu >= malam2){
	cout << "Tidur woi, jam berapa ini !!!" ;
}else  {
	cout << "masukan angka sesuai jam digital" ;
}
return 0;
}

