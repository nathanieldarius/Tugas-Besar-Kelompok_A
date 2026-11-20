#ifndef NILAIBST_H_INCLUDED
#define NILAIBST_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct Pengajuan
{
    string idPaper;
    string idPenulis;     // penulis pengaju
    string namaJurnal;    // nama jurnal/konferensi
    int biaya;            // key BST
    string status;        // submitted / under review / accepted / rejected
};

typedef Pengajuan infotypeN;              // variabel alias untuk infor
typedef struct nodePengajuan *addressN;   // variabel alias untuk pointer

// kerangka dari elemen node
struct nodePengajuan
{
    infotypeN info;
    addressN left;
    addressN right;
};

// kerangka dari BST
struct BST
{
    addressN root;
};

bool sebelum(const Pengajuan &left, const Pengajuan &right);
/* I.S. record left dan right terdefinisi
   F.S. true jika left berada sebelum right: biaya lebih kecil,
        lalu idPaper, idPenulis, namaJurnal sebagai tie-breaker */

// pengecekan apakah BST kosong
bool isEmpty(BST T);
/* I.S. BST T terdefinisi
   F.S. true jika BST kosong dan false jika tidak kosong */

// pembuatan BST kosong
void CreateBST(BST &T);
/* I.S. ~
   F.S. terbentuk BST kosong */

// manajemen memori
addressN createElemen(infotypeN x);
/* I.S. info x terdefinisi
   F.S. mengembalikan alamat node berisi x dengan anak kiri dan kanan NULL */

void dealokasi(addressN &P);
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen node
addressN findNode(BST T, string idPaper, string idPenulis, string namaJurnal);
/* I.S. BST T dan identitas pengajuan terdefinisi
   F.S. mengembalikan alamat node yang cocok atau NULL jika tidak ditemukan */

// penambahan elemen
void insertNode(BST &T, addressN P);
/* I.S. terdefinisi BST T yang mungkin kosong dan elemen node P
   F.S. menempatkan P berdasarkan biaya pengajuan (kecil di kiri, besar di kanan) */

// penghapusan node yang sudah diketahui alamatnya
void deleteNode(BST &T, addressN &P);
/* I.S. terdefinisi BST T yang mungkin kosong dan node P
   F.S. P dilepas dari BST (belum di-dealokasi); node lain menggantikan
        posisi P sesuai aturan BST */

void deletePengajuan(BST &T, string idPaper, string idPenulis, string namaJurnal);
/* I.S. terdefinisi BST T dan identitas pengajuan
   F.S. record yang cocok dihapus jika ditemukan */

void printInOrder(BST T);
/* I.S. terdefinisi BST T
   F.S. seluruh record ditampilkan dengan traversal in-order (biaya naik) */

void printPreOrder(BST T);
/* I.S. terdefinisi BST T
   F.S. seluruh record ditampilkan dengan traversal pre-order */

void printPostOrder(BST T);
/* I.S. terdefinisi BST T
   F.S. seluruh record ditampilkan dengan traversal post-order */

addressN findMin(BST T);
/* I.S. terdefinisi BST T
   F.S. mengembalikan node dengan biaya minimum atau NULL jika BST kosong */

addressN findMax(BST T);
/* I.S. terdefinisi BST T
   F.S. mengembalikan node dengan biaya maksimum atau NULL jika BST kosong */

int tinggiBST(BST T);
/* I.S. terdefinisi BST T
   F.S. mengembalikan tinggi BST; tinggi pohon kosong adalah 0 */

int jumlahNode(BST T);
/* I.S. terdefinisi BST T
   F.S. mengembalikan jumlah node dalam BST */

infotypeN inputPengajuan();
/* I.S. ~
   F.S. meminta data pengajuan dari user */

#endif // NILAIBST_H_INCLUDED