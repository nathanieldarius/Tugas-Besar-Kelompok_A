#ifndef DUMMY_H_INCLUDED
#define DUMMY_H_INCLUDED
#include "MLL-02/header/penulis.h"
#include "MLL-02/header/kepengarangan.h"
#include "MLL-02/header/paper.h"
#include "BST/header/nilaiBST.h"

void dummyPenulis(ListPenulis &LP);
/* I.S. LP terdefinisi dan kosong
   F.S. LP berisi minimal 5 data penulis */

void dummyPaper(ListPaper &LPa);
/* I.S. LPa terdefinisi dan kosong
   F.S. LPa berisi minimal 5 data paper */

void dummyKepengarangan(ListPaper &LPa, ListPenulis &LP);
/* I.S. LPa berisi 5 paper dan LP berisi 5 penulis
   F.S. daftar kepengarangan pada elemen paper berisi minimal 10 relasi ke penulis */

void dummyPengajuan(BST &T);
/* I.S. T terdefinisi dan kosong
   F.S. T berisi minimal 10 data pengajuan paper */

#endif // DUMMY_H_INCLUDED