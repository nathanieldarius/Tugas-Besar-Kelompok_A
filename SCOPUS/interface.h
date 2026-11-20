#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include "MLL-02/header/penulis.h"
#include "MLL-02/header/kepengarangan.h"
#include "MLL-02/header/paper.h"
#include "BST/header/nilaiBST.h"

void menu(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu utama ditampilkan dan pilihan pengguna diproses */

void menuFiturUmum(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu fitur umum ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumPaper(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu paper (parent) ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumPenulis(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu penulis (child) ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumKepengarangan(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu kepengarangan (relasi) ditampilkan dan pilihan pengguna diproses */

void menuFiturUmumPengajuan(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu pengajuan (BST) ditampilkan dan pilihan pengguna diproses */

void menuFiturKhusus(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu fitur khusus ditampilkan dan pilihan pengguna diproses */

void menuFiturBonus(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. list paper, list penulis, dan BST terdefinisi
   F.S. menu fitur bonus ditampilkan dan pilihan pengguna diproses */

#endif // INTERFACE_H_INCLUDED