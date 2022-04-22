#include "base.h"
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

void studi5::output()
{
  cout<<"\nNIM           : "<<nim <<endl;
  cout<<"Nama          : "<<nama<<endl;
  cout<<"Jumlah Matkul : "<<qtymatkul<<endl;
  for(int i=0;i<qtymatkul;i++)
    {
      cout<<"Matkul "<<i+1<<" : "<<matkul[i]<<endl;
      cout<<"SKS    "<<i+1<<" : "<<sks[i]<<endl;
    }
  cout<<"Total SKS     : "<<qtysks<<endl; //masih error
  cout<<"Total Bayar   : "<<"prosesbelum";
}

//int main testing
int main()
{
  studi5 x;
  x.input();
  x.output();
}