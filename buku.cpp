#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int y_i, tl_b, h_b, p_t, est;
 float total, disc, hsd, FixBook, Book;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=========== Daftar Buku Beserta Harganya ========"<<endl;
 cout<<"\t\t| You and Insecurities	 	: Rp 80.000,00  |"<<endl;
 cout<<"\t\t| Tangisan Laut Berdarah    	: Rp 85.000,00  |"<<endl;
 cout<<"\t\t| Hidden Beauty      	 	: Rp  70.000,00 |"<<endl;
 cout<<"\t\t| Pangsepuluh Tempur	 	: Rp  90.000,00 |"<<endl;
 cout<<"\t\t| Ester       	           	: Rp  95.000,00 |"<<endl;
 cout<<"\t\t=================================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Novel You and Insecurities yang dibeli	    : "; cin>>y_i;
 cout<<"Masukkan jumlah Novel Tangisan Laut Berdarah yang dibeli    : "; cin>>tl_b;
 cout<<"Masukkan jumlah Novel Hidden beauty yang dibeli     	    : "; cin>>h_b;
 cout<<"Masukkan jumlah Novel Pangsepuluh Tempur yang dibeli  	    : "; cin>>p_t;
 cout<<"Masukkan jumlah Novel Ester yang dibeli   	            : "; cin>>est;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<y_i<<"\t	You & Insecurities \t80000 \t\t"<<y_i*80000<<"\t    |"<<endl;
 cout<<"\t|   "<<tl_b<<"\t\tTangisan Laut Berdarah\t85000 \t\t"<<tl_b*85000<<"\t    |"<<endl;
 cout<<"\t|   "<<h_b<<"\t\tHidden beauty \t	70000 \t\t"<<h_b*70000<<"\t    |"<<endl;
 cout<<"\t|   "<<p_t<<"\t\tPangsepuluh Tempur\t90000 \t\t"<<p_t*90000<<"\t    |"<<endl;
 cout<<"\t|   "<<est<<"\t\tEster\t	\t95000 \t\t"<<est*95000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 
 Book = y_i*80000+tl_b*85000+h_b*70000+p_t*90000+est*95000;
 disc = 0.10*Book;
 FixBook =Book - disc;
 cout<<"\t|\t\tHarga Total 		  \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\tDiskon 			  \t: "<<disc<<"   \t    |"<<endl;
 cout<<"\t|\t\tHarga Setelah Diskon \t\t: "<<Book-disc<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;

}
