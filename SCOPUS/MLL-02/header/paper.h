#ifndef PAPER_H_INCLUDED
#define PAPER_H_INCLUDED
#include "penulis.h"
#include "kepengarangan.h"
#include <string>
#include <iostream>

using namespace std;

struct Paper
{
    string idPaper;
    string judul;
    string bidang;
    int tahun;
};

typedef Paper infotypePaper;              // variabel alias untuk infor
typedef struct elmPaper *addressPaper;    // variabel alias untuk pointer

// kerangka dari elemen list
struct elmPaper
{
    infotypePaper info;
    addressPaper next;
    addressPaper prev;
    ListKepengarangan LK;   // daftar relasi kepengarangan milik paper
};

// kerangka dari list
struct ListPaper
{
    addressPaper first;
    addressPaper last;
};

// pengecekan apakah list kosong
bool isEmpty(ListPaper LPa);
/* I.S. list LPa terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

void CreateList(ListPaper &LPa);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressPaper createElemen(infotypePaper x);
/* I.S. info paper x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan prev/next NULL
        dan daftar kepengarangan dalam keadaan kosong */

void dealokasi(addressPaper &P);
/* I.S. pointer P terdefinisi
   F.S. elemen paper dan seluruh elemen kepengarangannya di-dealokasi;
        elemen penulis yang dirujuk tidak ikut dihapus */

// pencarian sebuah elemen list
addressPaper findElm(ListPaper LPa, string idPaper);
/* I.S. list LPa dan id paper terdefinisi
   F.S. mengembalikan alamat elemen paper yang cocok atau NULL jika tidak ditemukan */

// penambahan elemen *
void insertFirst(ListPaper &LPa, addressPaper P);
/* I.S. terdefinisi list LPa yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(ListPaper &LPa, addressPaper Prec, addressPaper P);
/* I.S. terdefinisi list LPa yang mungkin kosong, elemen list P dan elemen list Prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(ListPaper &LPa, addressPaper P);
/* I.S. terdefinisi list LPa yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(ListPaper &LPa, addressPaper &P);
/* I.S. terdefinisi list LPa yang mungkin kosong
   F.S. P adalah alamat elemen pertama yang dihapus;
        elemen selanjutnya menjadi elemen pertama atau list kosong */

void deleteLast(ListPaper &LPa, addressPaper &P);
/* I.S. terdefinisi list LPa yang mungkin kosong
   F.S. P adalah alamat elemen terakhir yang dihapus;
        elemen sebelumnya menjadi elemen terakhir atau list kosong */

void deleteAfter(ListPaper &LPa, addressPaper Prec, addressPaper &P);
/* I.S. terdefinisi list LPa yang mungkin kosong dan elemen list Prec
   F.S. P adalah alamat elemen setelah Prec yang dihapus;
        elemen setelah P terhubung langsung dengan Prec */

void printInfo(ListPaper LPa);
/* I.S. terdefinisi list LPa yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua paper beserta penulisnya */

bool isPenulisUsed(ListPaper LPa, addressP pPenulis);
/* I.S. terdefinisi list paper dan alamat penulis
   F.S. true jika penulis masih direferensikan oleh kepengarangan suatu paper */

infotypePaper inputPaper();
/* I.S. ~
   F.S. meminta data paper dari user */

#endif // PAPER_H_INCLUDED