using namespace std;

class Proses{
	public :
		void cetak(){
			cout << "Pengeluaran\n";
		}

		void getData(){
		  ambil_data.open("api_data.txt");
          ambil_data >> saku;
          ambil_data >> jml_bulan;
          for(int i = 1; i<=jml_bulan; i++){
    			  ambil_data >> pengeluaran[i];  
          }  
          ambil_data.close();
      }	

		void toFile(){
      saku *= jml_bulan;
          for(int i = 1; i<=jml_bulan; i++){
        		total_pengeluaran += pengeluaran[i];
            total_tabungan = saku - total_pengeluaran;
          } 
    

			tulis_data.open("api_data.txt");
			tulis_data << saku << endl;
      tulis_data << jml_bulan << endl;
      for(int i = 1; i<=jml_bulan; i++){
        tulis_data << pengeluaran[i]<<endl;
      }
			
			tulis_data << total_pengeluaran << endl;
			tulis_data << total_tabungan;

		  tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
    int i, saku;
    int jml_bulan;
    int pengeluaran[20];
    int total_pengeluaran = 0;
    int total_tabungan = 0;
    
};
