/* File: marray.c */
/* Tanggal: 4 September 2016 */
/* Deskripsi: Program untuk mengetes ADT Array Statik Eksplisit */
/* Author: Asisten Algoritma dan Struktur Data 2016/2017 */

#include <stdio.h>
#include "matriks.h"

/*
  ==================================
      NOTE UNTUK ASISTEN
  ==================================
  Pakailah fungsi-fungsi berikut untuk membentuk matriks.
  Gunanya untuk menghindari kasus mahasiswa yang salah mengimplementasikan sehingga
  fungsi-fungsi lainnya salah.
  Silakan menambahkan fungsi-fungsi lain apabila diperlukan (intinya untuk satu kasus, satu fungsi saja yang diuji)
*/

void MakeMATRIKSAsisten(int NB, int NK, MATRIKS * M);
void BacaMATRIKSAsisten(MATRIKS * M, int NB, int NK);
void TulisMATRIKSAsisten(MATRIKS M);

int main () {
  int pil;
  scanf("%d",&pil);
  switch (pil) { 
    case 1: { // MakeMATRIKS
      break;
    }
    case 2: { // IsIdxValid
      break;
    }
    case 3: { // GetFirstIdxBrs
      break;
    }
    case 4: { // GetFirstIdxKol
      break;
    }
    case 5: { // GetLastIdxBrs
      break;
    }
    case 6: { // GetLastIdxKol
      break;
    }
    case 7: { // IsIdxEff
      MATRIKS M;
      int NB, NK;
      scanf("%d %d", &NB, &NK);
      MakeMATRIKSAsisten(NB, NK, &M);

      indeks i, j;
      scanf("%d %d", &i, &j);
      printf("%d", IsIdxEff(M, i, j));
      break;
    }
    case 8: { // GetElmtDiagonal
      break;
    }
    case 9: { // CopyMATRIKS
      break;
    }
    case 10: { // BacaMATRIKS
      break;
    }
    case 11: { // TulisMATRIKS
      break;
    }
    case 12: { // TambahMATRIKS
      break;
    }
    case 13: { // KurangMATRIKS
      break;
    }
    case 14: { // KaliMATRIKS
      break;
    }
    case 15: { // KaliKons
      break;
    }
    case 16: { // PKaliKons
      break;
    }
    case 17: { // EQ
      break;
    }
    case 18: { // NEQ
      break;
    }
    case 19: { // EQSize
      break;
    }
    case 20: { // NBElmt
      break;
    }
    case 21: { // IsBujurSangkar
      break;
    }
    case 22: { // IsSimetri
      break;
    }
    case 23: { // IsSatuan
        break;
    }
    case 24: { // IsSparse
      break;
    }
    case 25: { // Inverse1
      break;
    }
    case 26: { // Determinan
      break;
    }
    case 27: { // PInverse1
      break;
    }
    case 28: { // Transpose
      break;
    }
  }
  return 0;
}

void MakeMATRIKSAsisten (int NB, int NK, MATRIKS * M) {
/* Membentuk sebuah MATRIKS "kosong" yang siap diisi berukuran NB x NK di "ujung kiri" memori */
/* I.S. NB dan NK adalah valid untuk memori matriks yang dibuat */
/* F.S. Matriks M sesuai dengan definisi di atas terbentuk */
  NBrsEff(*M) = NB;
  NKolEff(*M) = NK;
}

void BacaMATRIKSAsisten(MATRIKS * M, int NB, int NK) {
  MakeMATRIKSAsisten(NB, NK, M);
  indeks i, j, lastIdxBrs = NB, lastIdxKol = NK;
  ElType el;
  
  for (i = BrsMin; i <= lastIdxBrs; i++) {
    for (j = KolMin; j<= lastIdxKol; j++) {
      scanf("%d", &el);
      Elmt(*M, i, j) = el;
    }
  }
}

void TulisMATRIKSAsisten(MATRIKS M) {
  indeks i, j, lastIdxBrs = NBrsEff(M), lastIdxKol = NKolEff(M);
  for (i = BrsMin; i <= lastIdxBrs; i++) {
    for (j = KolMin; j < lastIdxKol; j++) {
      printf("%d ", Elmt(M, i, j));
    }
    printf("%d\n", Elmt(M, i, j));
  }
}