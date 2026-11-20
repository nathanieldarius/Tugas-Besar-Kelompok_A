#ifndef PENULIS_H_INCLUDED
#define PENULIS_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct Penulis
{
    string idPenulis;
    string nama;
    string institusi;
    string email;
};

typedef Penulis infotypeP;                // variabel alias untuk infor
typedef struct elmPenulis *addressP;      // variabel alias untuk pointer

// kerangka dari elemen list
struct elmPenulis
{
    infotypeP info;
    addressP next;
};

// kerangka dari list
struct ListPenulis
{
    addressP first;
};

// pengecekan apakah list kosong
bool isEmpty(ListPenulis LP);
/* I.S. list LP terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void CreateList(ListPenulis &LP);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressP createElemen(infotypeP x);
/* I.S. info penulis x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan next NULL */

void dealokasi(addressP &P);
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen list
addressP findElm(ListPenulis LP, string idPenulis);
/* I.S. list LP dan id penulis terdefinisi
   F.S. mengembalikan alamat elemen penulis yang cocok atau NULL jika tidak ditemukan
*/

// penambahan elemen *
void insertFirst(ListPenulis &LP, addressP P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(ListPenulis &LP, addressP Prec, addressP P);
/* I.S. terdefinisi list LP yang mungkin kosong, elemen list P dan elemen list Prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(ListPenulis &LP, addressP P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(ListPenulis &LP, addressP &P);
/* I.S. terdefinisi list LP yang mungkin kosong
   F.S. P adalah alamat elemen pertama list yang dihapus;
        elemen selanjutnya menjadi elemen pertama atau list menjadi kosong */

void deleteLast(ListPenulis &LP, addressP &P);
/* I.S. terdefinisi list LP yang mungkin kosong
   F.S. P adalah alamat elemen terakhir list yang dihapus;
        elemen sebelumnya menjadi elemen terakhir atau list menjadi kosong */

void deleteAfter(ListPenulis &LP, addressP Prec, addressP &P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list Prec
   F.S. P adalah alamat elemen setelah Prec yang dihapus;
        elemen setelah P terhubung langsung dengan Prec */

void printInfo(ListPenulis LP);
/* I.S. terdefinisi list LP yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

infotypeP inputPenulis();
/* I.S. ~
   F.S. meminta data penulis dari user */

#endif // PENULIS_H_INCLUDED