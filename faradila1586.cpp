#include <iostream>
#include <conio.h>
using namespace std;


class jenishp{  //nama class
 public :  //merupakan daftar fungsi yang akan ditampilkan
 string samsung();
 string iphone();
 	int pilihanbeli;
 /*int luas_4(int s);
 int keliling_4(int s);
 int luas_p(int a,int b);
 int keliling_p(int a,int b);*/
};


 string jenishp :: samsung(){  /*penulisan fungsi dengan prototype didahului dengan nama class dan tanda :: */
   cout<<"Jenis Handphone Samsung yang tersedia\n\n";
   cout<<"1. Samsung A6 plus \n2. Samsung A7 \n3. Samsung J6 \n4. Samsung S9\n";
   
   
  }
  string jenishp :: iphone(){  /*penulisan fungsi dengan prototype didahului dengan nama class dan tanda :: */
   cout<<"Jenis Handphone Apple yang tersedia\n\n";
   cout<<"1. IPhone 5s \n2. IPhone 6plus \n3. IPhone 7 \n4. IPhone X\n";
   
   
  }
 /*int pugcrut ::luas_p(int a,int b){
   return a*b;
 }
 int pugcrut ::keliling_p(int a,int b){
   return 2*(a+b);
 }
*/
void beli()
{
jenishp namahP;
balik:
 cout<<"\nmasukan pilihan hp yang ingin dibeli: ";
 cin >> namahP.pilihanbeli;
 	if(namahP.pilihanbeli == 1)
	
 		cout<<"transaksi berhasil,silahkan melakukan pembayaran di kasir";
	 
	else if(namahP.pilihanbeli == 2)
 		cout<<"transaksi berhasil,silahkan melakukan pembayaran di kasir";
	 
	else if(namahP.pilihanbeli == 3)
 		cout<<"transaksi berhasil,silahkan melakukan pembayaran di kasir";
	 
	else if(namahP.pilihanbeli == 4)
 		cout<<"transaksi berhasil,silahkan melakukan pembayaran di kasir";
	else
	cout <<"salah tekan anda";

}

main (){
 int pil;
 system("cls");
 jenishp namahp;   //nama dan objek class
  cout<<"\n\tprogram sederhana dengan class\n\n";
 cout<<"Grosir Hp\n";
 cout<<"1.SAMSUNG\n";
 cout<<"2.IPHONE\n";
 cout<<"3.Keluar\n";
 cout<<"----------------------> ";cin>>pil;
if (pil==1){

 namahp.samsung();
 beli();	
}else if (pil==2){
	
 namahp.samsung();
 beli();
}

  
 
 
 /*cout<<"\nLuas dan keliling persegi 4\n";
  int x;
  cout<<"___________________________________\n";
  cout<<"\n-Masukkan panjang sisi : ";cin>>x;
  cout<<"\nLuasnya : " <<j.luas_4(x);     /*pemanggilan class dengan pertama menuliskan
                   objek class diikuti tanda .
                 dan nama fungsi yang di panggil*/
  //cout<<"\nKelilingnya : " <<j.keliling_4(x);getch();
  



  /*cout<<"\nLuas dan keliling persegi panjang\n";
  int p,l;
  cout<<"___________________________________\n";
  cout<<"\n-Masukkan panjang : \n";cin>>p;
  cout<<"\n-Masukkan lebar : \n";cin>>l;
  cout<<"\nLuasnya : "<<j.luas_p(p,l);
  cout<<"\nKelilingnya : "<<j.keliling_p(p,l);getch();
  break;
   default:cout<<"\nAnda keluar !!!\n";*/
  

}
