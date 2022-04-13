using namespace std;

class Input{
    public :
        void cetak(){
          cout << "APLIKASI MENGHITUNG UANG ANDI \n";
          cout << "================================\n";
          cout << "Uang Saku Per bulan     : "; cin>>saku;
    			cout << "Jumlah bulan            : "; cin>>jml_bulan;
          cout << "================================\n";
          for(int i = 1; i<=jml_bulan; i++){
            cout << "Bulan ke " << i << endl;
            cout << "Pengeluaran          : "; cin>>pengeluaran[i];
            cout << "=================================\n";
          }
		}	

		void toFile(){
			tulis_data.open("api_data.txt");
      tulis_data << saku << endl;
      tulis_data << jml_bulan << endl;
      for(int i = 1; i<=jml_bulan; i++){
    		tulis_data << pengeluaran[i]<<endl;  
      }
			tulis_data.close();
		}

	private : 
		ofstream tulis_data;
    int saku;
		int jml_bulan;
    int pengeluaran[20];
};
