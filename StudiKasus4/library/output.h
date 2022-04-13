using namespace std;

class Output{
  public:
    void getData(){
  		ambil_data.open("api_data.txt");
      ambil_data >> saku;
      ambil_data >> jml_bulan;
      for(int i = 1; i<=jml_bulan; i++){
          ambil_data >> pengeluaran[i];
        }
      
      ambil_data >> total_pengeluaran;
      ambil_data >> total_tabungan;
    
  		ambil_data.close();
    }		

    void cetak(){
      cout << "Total saku "<< jml_bulan <<" bulan : Rp "<< saku <<endl;
      cout << "=================================" <<endl;
      for(int i = 1; i<=jml_bulan; i++){
      cout << "Bulan ke-"<< i << endl;
      cout << "Pengeluaran            : Rp " << pengeluaran[i] << endl << endl;
        }
      cout << "=================================" <<endl;
      cout << "Total Pengeluaran      : Rp " << total_pengeluaran << endl;
      cout << "Total Uang tabungan    : Rp " << total_tabungan << endl;
    }


  	private :
  		ifstream ambil_data;
      int jml_bulan;
      int i, saku;
      int pengeluaran[20];
      int total_pengeluaran = 0;
		  int sisa[20];
      int total_tabungan = 0;

};
