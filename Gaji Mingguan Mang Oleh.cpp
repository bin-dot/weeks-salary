/* Sitti Aulia Sabina Rahmannissa */
/* 20051397016 */

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main()
{
	int Total_Gaji, Gaji_Perjam, Gaji_Lembur, Gaji_Mingguan, Jumlah_Jam_Kerja, Jam_Lembur;
	char nama_karyawan [29], golongan;
	cout << "Menghitung Gaji Mingguan Karyawan\n";
	cout << "=================================\n";
	cout << "Nama Karyawan = Mang Oleh";
	cin >> nama_karyawan;
	cout << "Golongan =  C";
	cin >> golongan;
	cout << "Masukkan Jumlah Jam Kerja (0-48) = 48";
	cin >> Jumlah_Jam_Kerja;
	cout << "Masukkan Jam Lembur = 0";
	cin >> Jam_Lembur;
	
	Total_Gaji = Gaji_Mingguan + Gaji_Lembur;
	
	if (golongan == 'A' || golongan == 'a' ){
		Gaji_Mingguan = 5000*Jumlah_Jam_Kerja;
		Gaji_Lembur = 4000*Jam_Lembur;
		Total_Gaji = Gaji_Mingguan + Gaji_Lembur;
	}
	else if (golongan == 'B' || golongan == 'b' ){
		Gaji_Mingguan = 7000*Jumlah_Jam_Kerja;
		Gaji_Lembur = 4000*Jam_Lembur;
		Total_Gaji = Gaji_Mingguan + Gaji_Lembur;
	}
	else if (golongan == 'C' || golongan == 'c' ){
		Gaji_Mingguan = 8000*Jumlah_Jam_Kerja;
		Gaji_Lembur = 4000*Jam_Lembur;
		Total_Gaji = Gaji_Mingguan + Gaji_Lembur;
	}
	else if (golongan == 'D' || golongan == 'd' ){
		Gaji_Mingguan = 10000*Jumlah_Jam_Kerja;
		Gaji_Lembur = 4000*Jam_Lembur;
		Total_Gaji = Gaji_Mingguan + Gaji_Lembur;
	}
	cout << "---------------------------------------------\n";
	cout << "Nama Karyawan = Mang Oleh" << nama_karyawan <<endl;
	cout << "Gaji Minggu Ini Sebesar Rp. 3840000" << Total_Gaji << endl;
	return 0;
}
