#include "base.h"
// jangan lupa rekursifnya
// bukan seperti ini ya kak?
// method prosesnya ada 2 ?
// tidak kak hanya ada 1, yang bagian bawah hanya untuk output saja kak
// ok
int studi5::proses(int qtysks){
	if (qtysks<=20)
		return (qtysks*150000)*0.75;
	else{
		return qtysks;
	}
}

//void studi5::proses(){
//  cout << "Berapa SKS? : "; cin >> qtysks;
//  cout << "Total Bayar" << proses(qtysks);
//}

int main(){
  studi5 a;
  a.proses();
}