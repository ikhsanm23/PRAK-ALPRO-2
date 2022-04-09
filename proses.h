using namespace std;

class Proses {
public:
  void cetak() { cout << "Ini Proses \n"; }

  void getData() {
    ambil_data.open("in.put.txt");
    bool ayam_geprek = true;
    bool ayam_goreng = true;
    bool udang_goreng = true;
    bool cumi_goreng = true;
    bool ayam_bakar = true;
    bool jarak = true;
    while (!ambil_data.eof()) {
      if (ayam_geprek) {
        ambil_data >> bnyk_gprk;
        ayam_geprek = false;
      }
      else if (ayam_goreng) {
        ambil_data >> bnyk_aymgrg;
        ayam_goreng = false;
      }
      else if (udang_goreng) {
        ambil_data >> bnyk_udanggrg;
        udang_goreng = false;
      }
      else if (cumi_goreng) {
        ambil_data >> bnyk_cumigrg;
        cumi_goreng = false;
      }
     else if (ayam_bakar) {
        ambil_data >> bnyk_aymbkr;
        ayam_bakar = false;
      }
      else if (jarak) {
        ambil_data >> jrk;
        jarak = false;
      }
    }
    ambil_data.close();
  }

  void toFile() {
    int subtotal = (hrg_gprk * bnyk_gprk) + (hrg_aymgrg * bnyk_aymgrg) +(hrg_udanggrg * bnyk_udanggrg) +(hrg_cumigrg * bnyk_cumigrg) + (hrg_aymbkr * bnyk_aymbkr);

    int batas = 3;
    int total = int(subtotal);
    int ongkir = 15000;

    if (jrk > batas) {
      ongkir = ongkir + 10000;
      total = subtotal + ongkir;
    } else {
      total = subtotal + ongkir;
    }

    tulis_data.open("in.put.txt");
    tulis_data << subtotal << endl;
    tulis_data << ongkir << endl;
    tulis_data << total << endl;
    tulis_data << bnyk_gprk << endl;
    tulis_data << bnyk_aymgrg << endl;
    tulis_data << bnyk_udanggrg << endl;
    tulis_data << bnyk_cumigrg << endl;
    tulis_data << bnyk_aymbkr;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  int hrg_gprk = 21000;
  int hrg_aymgrg = 17000;
  int hrg_udanggrg = 19000;
  int hrg_cumigrg = 20000;
  int hrg_aymbkr = 25000;
  int bnyk_gprk, bnyk_aymgrg, bnyk_udanggrg, bnyk_cumigrg, bnyk_aymbkr,
      jrk, total, ongkir;
};