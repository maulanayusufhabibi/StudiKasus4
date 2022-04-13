using namespace std;

class Input{
    public :
        void cetak(){
          cout << "APLIKASI MENGHITUNG UANG ANDI \n";
          cout << "================================\n";
          cout << "Uang Saku 1 bulan     : "; cin>>saku;
    			cout << "Jumlah bulan          : "; cin>>jml_bulan;
          cout << "================================\n";
          for(int i = 1; i<=jml_bulan; i++){
            cout << "Bulan ke " << i << endl;
    			  cout << "Biaya Kuliah          : "; cin>>duit_kuliah;
            cout << "Biaya Jajan           : "; cin>>duit_jajan;
            cout << "Jumlah yang ditabung  : "; cin>>jml_nabung;
            cout << "=================================\n";
          }
		}	

		void toFile(){
			tulis_data.open("../pra_data/input.txt");
      tulis_data << jml_bulan << endl;
      tulis_data << duit_kuliah << endl;
      tulis_data << duit_jajan << endl;
			tulis_data << jml_nabung;
			tulis_data.close();
		}

	private : 
		ofstream tulis_data;
    int saku;
		int jml_bulan;
    int duit_kuliah;
    int duit_jajan;
    int jml_nabung;
};
