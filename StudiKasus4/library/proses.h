using namespace std;

class Proses{
	public :
		void cetak(){
			cout << "Pengeluaran\n";
		}

		void getData(){
		ambil_data.open("../dummy/out_input.txt");
			bool pengeluaran = true;
      ambil_data 
			for(int i=0; i<=bulan; i++){
        ambil_da
				if (bulan =1){
					// cout<<"Masukkan Pengeluaran PerBulan : ";
     //      ambil_data>>pengeluaran;
     //      cout<<"Masukkan Total pengeluaran : ";
     //      ambil_data>>keluar;
     //      cout<<"Masukkan Pengeluaran Kuliah : ";
     //      ambil_data>>keluar_Kuliah;
     //      cout<<"Masukkan Pengeluaran Jajan : ";
     //      ambil_data>>keluar_jajan;
     //      cout<<"Masukkan Tabungan perbulan : ";
     //      ambil_data>>tabungan;
          ambil_data>>
				}
        else if (bulan = 2){
					cout<<"Masukkan Pengeluaran PerBulan : ";
          ambil_data>>pengeluaran;
          cout<<"Masukkan Total pengeluaran : ";
          ambil_data>>keluar;
          cout<<"Masukkan Pengeluaran Kuliah : ";
          ambil_data>>keluar_Kuliah;
          cout<<"Masukkan Pengeluaran Jajan : ";
          ambil_data>>keluar_jajan;
          cout<<"Masukkan Tabungan perbulan : ";
          ambil_data>>tabungan;
				}
        else if (bulan = 3){
					cout<<"Masukkan Pengeluaran PerBulan : ";
          ambil_data>>pengeluaran;
          cout<<"Masukkan Total pengeluaran : ";
          ambil_data>>keluar;
          cout<<"Masukkan Pengeluaran Kuliah : ";
          ambil_data>>keluar_Kuliah;
          cout<<"Masukkan Pengeluaran Jajan : ";
          ambil_data>>keluar_jajan;
          cout<<"Masukkan Tabungan perbulan : ";
          ambil_data>>tabungan;
				}
				
			}
			//ambil_data.close();
		

		void toFile(){
		 total_pengeluaran = saku -(pengeluaran + keluar + keluar_kuliah + keluar_jajan + tabungan)
      total_tabungan += tabung; 
          
	    (t2 = (total + ongkir - diskon));



			// tulis_data.open("../dummy/proses_input.txt");
			// tulis_data << total << endl;
   //    tulis_data << jarak << endl;      
			// tulis_data << diskon << endl;
			// tulis_data << t2 << endl;
			// tulis_data << bnyk_aymGpr << endl;
			// tulis_data << bnyk_aymGr <<endl;
   //    tulis_data << bnyk_udGr <<endl;
   //    tulis_data << bnyk_cmGr <<endl;
   //    tulis_data << bnyk_aymBk;
			// tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;

		int saku = 500000;
    int pengeluaran;
    int keluar, keluar_kuliah;
    int tabungan;
    int totalPengeluaran;
    int total;
};