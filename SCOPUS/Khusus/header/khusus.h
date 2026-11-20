#ifndef KHUSUS_H_INCLUDED
#define KHUSUS_H_INCLUDED
#include "../../MLL-02/header/penulis.h"
#include "../../MLL-02/header/kepengarangan.h"
#include "../../MLL-02/header/paper.h"
#include "../../BST/header/nilaiBST.h"

void khusus1(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Mengajukan karya ilmiah ke jurnal/konferensi dengan memilih paper dan
        penulis pengaju yang terdaftar dalam hubungan kepengarangan paper tersebut.
*/

void khusus2(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Menyimpan riwayat pengajuan paper ke BST berdasarkan biaya pengajuan.
*/

void khusus3(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Memperbarui status pengajuan karya ilmiah
        (submitted, under review, accepted, rejected).
*/

void khusus4(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Menampilkan informasi jurnal/konferensi dengan jumlah karya ilmiah
        dan pendapatan (total biaya pengajuan) terbanyak.
*/

void khusus5(ListPaper &LPa, ListPenulis &LP, BST &T);
/* I.S. -
   F.S. Menampilkan semua karya ilmiah berdasarkan status pengajuan.
*/

#endif // KHUSUS_H_INCLUDED