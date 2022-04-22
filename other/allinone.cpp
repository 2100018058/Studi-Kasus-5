#include <iostream>
using namespace std;

class studi5
{
  public:
    void input();
    void output();
    int proses(int qtysks);


  private:
    int nim,qtymatkul,bayar,qtysks,beforediskon,diskon;
		int sks[20];
		string nama,matkul[20];
};

void studi5::input()
{
  cout<<"Masukkan NIM Anda   : ";cin>>nim;
  cout<<"Masukkan Nama Anda  : ";cin>>nama;
  cout<<"Jumlah Matkul       : ";cin>>qtymatkul;
  for(int i=0;i<qtymatkul;i++)
    {
      cout<<"Matkul "<<i+1<<" : ";cin>>matkul[i];
      cout<<"SKS    "<<i+1<<" : ";cin>>sks[i];
      qtysks+=sks[i];
    }
}

int studi5::proses(int qtysks){
	if (qtysks<=20)
		return (qtysks*150000)*0.75;
	else
	{
		return qtysks;
	}
}

void studi5::output()
{
  cout<<"\nNIM         : "<<nim <<endl;
  cout<<"Nama          : "<<nama<<endl;
  cout<<"Jumlah Matkul : "<<qtymatkul<<endl;
  for(int i=0;i<qtymatkul;i++)
    {
      cout<<"Matkul "<<i+1<<" : "<<matkul[i]<<endl;
      cout<<"SKS    "<<i+1<<" : "<<sks[i]<<endl;
    }
  cout<<"Total SKS     : "<<qtysks<<endl;
  cout<<"Total Bayar   : "<<proses(qtysks);
}



int main(){
  studi5 out;
  out.input();
  out.output();
  return 0;
}