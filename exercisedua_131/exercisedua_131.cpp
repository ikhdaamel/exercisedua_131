#include <iostream>
#include <vector>
using namespace std; 

#include "pengarang.h"
#include "buku.h"

class  pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*>daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "penerbit\"" << nama << "\"ada\n";
	}
	~penerbit() {
		cout << "penerbit\"" << nama << "\" tidak ada\n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class pengarang {
public:
	string nama;
	vector<penerbit*>daftar_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang\"" << nama << "\"ada\n";
	}
	~pengarang() {
		cout << "pengarang\"" << nama << "\" tidak ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void penerbit::tambahPengarang(pengarang *pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
	cout << " daftar pengarang pada penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	penerbit* varPenerbit1 = new penerbit("game press");
	penerbit* varPenerbit2 = new penerbit("intan pariwara");
	pengarang* varPengarang1 = new pengarang("giga");
	
	varPengarang1->tambahPenerbit(varPenerbit1);
	varPengarang1->tambahPenerbit(varPenerbit2);

	varPengarang1->cetakPenerbit();


	pengarang* varPengarang2 = new pengarang("joko");
	pengarang* varpengarang3 = new pengarang("lia");
	pengarang* varpengarang4 = new pengarang("asroni");
	pengarang* varpengarang1 = new pengarang("giga");

	varPengarang1->tambahBuku();
	varPengarang2->tambahBuku();
	varPengarang3->tambahBuku();
	varPengarang4->tambahBuku();



}