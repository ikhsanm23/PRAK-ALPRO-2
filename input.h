using namespace std;

class Input {
public:
  void cetak() {
    cout << "Aplikasi Penjualan Makanan \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam geprek Rp. 21000 \n";
    cout << "2) Ayam goreng Rp. 17000 \n";
    cout << "3) Udang goreng Rp. 19000 \n";
    cout << "4) Cumi goreng Rp. 20000 \n";
    cout << "5) Ayam bakar Rp. 25000 \n";
    cout<<"Pesan Ayam geprek  : "; cin >> bnyk_gprk;
    cout<<"Pesan Ayam goreng  : "; cin >> bnyk_aymgrg;
    cout<<"Pesan Udang goreng : "; cin >> bnyk_udanggrg;
    cout<<"Pesan Cumi goreng  : "; cin >> bnyk_cumigrg;
    cout<<"Pesan Ayam bakar   : "; cin >> bnyk_aymbkr;
    cout<<"Jarak rumah anda   : "; cin >> jrk;
    
  }
    void toFile() {
    tulis_data.open("in.put.txt");
    tulis_data << bnyk_gprk << endl;
    tulis_data << bnyk_aymgrg << endl;
    tulis_data << bnyk_udanggrg << endl;
    tulis_data << bnyk_cumigrg << endl;
    tulis_data << bnyk_aymbkr << endl;
    tulis_data << jrk;
    tulis_data.close();
}

private:
  ofstream tulis_data;
  int bnyk_gprk, bnyk_aymgrg, bnyk_udanggrg, bnyk_cumigrg, bnyk_aymbkr, jrk;
};