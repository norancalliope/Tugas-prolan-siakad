#include <iostream>
#include <vector>
#include <stdlib.h>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMahasiswa;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
    int idMahasiswa = 0;
    int idDosen = 0;
    int idTendik = 0;

	while(1) {
		cout << "Selamat datang di Institut Teknologi Sepuluh Nopember" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMahasiswa.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tenaga kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan pilih menu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                  system("cls");

                idMahasiswa++;
                string id, nama, nrp, departemen, fakultas;
                int dd, mm, yy, tahunmasuk;
                id = idMahasiswa;
                cout << "masukkan nama mahasiswa : ";
                cin.ignore();
                getline(cin, nama);
                cout << "masukkan tanggal lahir : ";
                cin >> dd;
                cout << "masukkan bulan lahir : ";
                cin >> mm;
                cout << "masukkan tahun lahir : ";
                cin >> yy;
                cout << "masukkan nrp : ";
                cin >> nrp;
                cout << "masukkan departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "masukkan fakultas : ";
                cin.ignore();
                getline(cin, fakultas);
                cout << "masukkan tahun masuk : ";
                cin >> tahunmasuk;
                mahasiswa inputMahasiswa = mahasiswa(id, nama, dd, mm, yy, nrp, departemen, fakultas, tahunmasuk);
                recMahasiswa.push_back(inputMahasiswa);
            }
			break;
			case 2: {
                  system("cls");
				idDosen++;
                string id, nama, npp, departemen,pendidikan;
                int dd, mm, yy;
                id = idDosen;
                cout << "masukkan nama Dosen : ";
                cin.ignore();
                getline(cin, nama);
                cout << "masukkan tanggal lahir : ";
                cin >> dd;
                cout << "masukkan bulan lahir : ";
                cin >> mm;
                cout << "masukkan tahun lahir : ";
                cin >> yy;
                cout << "masukkan npp : ";
                cin >> npp;
                cout << "masukkan departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "masukkan pendidikan : ";
                cin.ignore();
                getline(cin, pendidikan);
                dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
                recDosen.push_back(inputDosen);
			}
			break;
			case 3:{
                 system("cls");
				idTendik++;
                string id, nama, npp, unit;
                int dd, mm, yy;
                id = idTendik;
                cout << "masukkan nama tendik : ";
                cin.ignore();
                getline(cin, nama);
                cout << "masukkan tanggal lahir : ";
                cin >> dd;
                cout << "masukkan bulan lahir : ";
                cin >> mm;
                cout << "masukkan tahun lahir : ";
                cin >> yy;
                cout << "masukkan npp : ";
                cin >> npp;
                cout << "masukkan unit : ";
                cin.ignore();
                getline(cin, unit);
                tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unit);
                recTendik.push_back(inputTendik);
			}

			break;
			case 4:{
                    system("cls");
                for(int i = 0; i < idMahasiswa; i++){
                    cout << "Nama Mahasiswa :" << recMahasiswa[i].getNama() << endl;
					cout << "Tanggal Lahir  :" << recMahasiswa[i].getTglLahir() <<  "/"<<recMahasiswa[i].getBulanLahir()<< "/" << recMahasiswa[i].getTahunLahir() <<endl;
					cout << "NRP            :" << recMahasiswa[i].getNRP() << endl;
					cout << "Departemen     :" << recMahasiswa[i].getDepartemen() << endl;\
                    cout << "Fakultas       :" << recMahasiswa[i].getFakultas() << endl; 
					cout << "Tahun Masuk    :" << recMahasiswa[i].getTahunMasuk() << endl;
                }
            }
			break;
			case 5:{
                  system("cls");
				  for(int i = 0; i < idDosen; i++){
                    cout << "Nama Dosen     :" << recDosen[i].getNama();
                    cout << "Tanggal Lahir  :" << recDosen[i].getTglLahir() <<  "/"<<recDosen[i].getBulanLahir()<< "/" << recDosen[i].getTahunLahir() <<endl;
                    cout << "NPP            :" << recDosen[i].getNPP() << endl;
                    cout << "Departemen     :" << recDosen[i].getDepartemen() << endl;
                    cout << "Pendidikan     :" << recDosen[i].getPendidikan() << endl;
                }
			}
			break;
			case 6:{
                  system("cls");
				  for(int i = 0; i < idTendik; i++){
                    cout << "Nama Tendik    :" << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir  :" << recTendik[i].getTglLahir() <<  "/"<<recTendik[i].getBulanLahir()<< "/" << recTendik[i].getTahunLahir() <<endl;
					cout << "NPP            :" << recTendik[i].getNPP() << endl;
					cout << "Unit           :" << recTendik[i].getUnit() << endl;
                }
			}
				break;
		}

	}
    main();
}
