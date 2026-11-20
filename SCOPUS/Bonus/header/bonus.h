#ifndef BONUS_H_INCLUDED
#define BONUS_H_INCLUDED
#include "../../MLL-02/header/penulis.h"
#include "../../MLL-02/header/kepengarangan.h"
#include "../../MLL-02/header/paper.h"
#include "../../BST/header/nilaiBST.h"

void bonus1(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Menampilkan informasi penulis dengan karya ilmiah terbanyak
        yang berstatus terpublish (accepted).
*/

void bonus2(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Menampilkan paper yang belum mendapatkan keputusan review
        (status submitted atau under review).
*/

void bonus3(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Menampilkan riwayat transaksi pengajuan berdasarkan nama penulis.
*/

#endif // BONUS_H_INCLUDED