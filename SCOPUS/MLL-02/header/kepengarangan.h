#ifndef KEPENGARANGAN_H_INCLUDED
#define KEPENGARANGAN_H_INCLUDED

#include "penulis.h"
#include <string>
#include <iostream>

using namespace std;

struct Kepengarangan
{
    int urutan;        // urutan penulis pada paper
    string peran;      // "penulis utama" / "anggota"
};

typedef Kepengarangan infotypeK;              // variabel alias untuk infor
typedef struct elmKepengarangan *addressK;    // variabel alias untuk pointer

// kerangka dari elemen list (relasi)
struct elmKepengarangan
{
    infotypeK info;
    addressK next;
    addressP pPenulis;   // relasi ke penulis (tidak ikut dihapus)
};

// kerangka dari list
struct ListKepengarangan
{
    addressK first;
    addressK last;
};

// pengecekan apakah list kosong
bool isEmpty(ListKepengarangan LK);
/* I.S. list LK terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void CreateList(ListKepengarangan &LK);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressK createElemen(infotypeK x, addressP pPenulis);
/* I.S. info kepengarangan x dan alamat penulis terdefinisi
   F.S. mengembalikan alamat elemen berisi x, next NULL, dan menunjuk pPenulis */

void dealokasi(addressK &P);
/* I.S. pointer P terdefinisi
   F.S. elemen relasi di-dealokasi; elemen penulis yang ditunjuk tidak ikut dihapus */

// pencarian sebuah elemen list
addressK findElm(ListKepengarangan LK, string idPenulis);
/* I.S. list LK milik sebuah paper dan id penulis terdefinisi
   F.S. mengembalikan alamat relasi yang menunjuk penulis tersebut atau NULL jika tidak ada */

// penambahan elemen *
void insertFirst(ListKepengarangan &LK, addressK P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(ListKepengarangan &LK, addressK Prec, addressK P);
/* I.S. terdefinisi list LK yang mungkin kosong, elemen list P dan elemen list Prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(ListKepengarangan &LK, addressK P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(ListKepengarangan &LK, addressK &P);
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. P adalah alamat elemen pertama yang dihapus;
        elemen selanjutnya menjadi elemen pertama atau list kosong */

void deleteLast(ListKepengarangan &LK, addressK &P);
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. P adalah alamat elemen terakhir yang dihapus;
        elemen sebelumnya menjadi elemen terakhir atau list kosong */

void deleteAfter(ListKepengarangan &LK, addressK Prec, addressK &P);
/* I.S. terdefinisi list LK yang mungkin kosong dan elemen list Prec
   F.S. P adalah alamat elemen setelah Prec yang dihapus;
        elemen setelah P terhubung langsung dengan Prec */

void printInfo(ListKepengarangan LK);
/* I.S. terdefinisi list LK yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

infotypeK inputKepengarangan();
/* I.S. ~
   F.S. meminta data kepengarangan (urutan dan peran) dari user */

#endif // KEPENGARANGAN_H_INCLUDED