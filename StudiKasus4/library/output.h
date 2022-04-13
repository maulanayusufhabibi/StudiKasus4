using namespace std;

class Output{
  public:
    void cetak(){
      cout << "  Pengeluaran Kuliah      : Rp "<<data_file[0]<<endl;
			cout << "  Pengeluaran Jajan       : Rp "<<data_file[1]<<endl;
      cout << "  Menabung                : Rp "<<data_file[2]<<endl;
      cout << "  Pengeluaran Per Bulan   : Rp "<<data_file[3]<<endl;
      cout << "  Total Pengeluaran       : Rp "<<data_file[4]<<endl;
      cout << "  Total Uang tabungan     : Rp "<<data_file[5];
    }

    void getData(){
  			ambil_data.open("api_data.txt");
  			while(!ambil_data.eof()){
  				ambil_data >> data_file[index];
  				index += 1;
  			}
  			ambil_data.close();
  	}	
  	private :
  		ifstream ambil_data;
  		string data_file[30];
  		int index = 0;
};