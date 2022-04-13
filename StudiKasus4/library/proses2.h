using namespace std;

class Proses{
	public :
		void cetak(){
			cout << "Pengeluaran\n";
		}

		void getData(){
		ambil_data.open("api_data.txt");
      ambil_data >> jml_bulan;
          ambil_data >> jml_bulan;
          ambil_data >> duit_kuliah;
          ambil_data >> duit_jajan;
			    ambil_data >> jml_nabung;
          ambil_data.close();
      }	

		void toFile(){
      for(int i=0; i<=jml_bulan; i++){
        pengeluaran = duit_kuliah + duit_jajan + jml_nabung;
        total_tabungan += jml_nabung;
        total_pengeluaran += pengeluaran;
          }

			tulis_data.open("api_data.txt");
			tulis_data << duit_kuliah << endl;
      tulis_data << duit_jajan << endl;      
			tulis_data << jml_nabung << endl;
			tulis_data << pengeluaran << endl;
			tulis_data << total_pengeluaran << endl;
			tulis_data << total_tabungan;

		  tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;

		int saku;
    int pengeluaran;
    int tabungan;
    int total_pengeluaran;
    int total;
    int jml_bulan;
          int duit_kuliah;
          int duit_jajan;
			    int jml_nabung;
int total_tabungan;
};