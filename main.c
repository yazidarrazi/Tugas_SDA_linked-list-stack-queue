#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "stack.h"
#include "nasabah.h"

void printMenu() {
    printf("\n=== Sistem Antrean Bank ===\n");
    printf("1. Menambahkan Nasabah\n");
    printf("2. Memproses Nasabah\n");
    printf("3. Menampilkan Antrean\n");
    printf("4. Membatalkan Transaksi (Undo)\n");
    printf("5. Menampilkan Riwayat Transaksi\n");
    printf("6. Keluar\n");
    printf(">> Pilihan Anda: ");
}

void printLayanan() {
    printf("\nPilih jenis layanan:\n");
    printf("  1. Setor Tunai\n");
    printf("  2. Tarik Tunai\n");
    printf("  3. Pembukaan Rekening\n");
    printf("Pilihan (1-3): ");
}

const char* getLayananName(int pilihan) {
    switch (pilihan) {
        case 1: return "Setor Tunai";
        case 2: return "Tarik Tunai";
        case 3: return "Pembukaan Rekening";
        default: return "Tidak Valid";
    }
}

typedef struct {
    Nasabah *nasabah;
    int layanan;
} Transaksi;

int main() {
    Queue antrean;
    Stack riwayat;
    initQueue(&antrean);
    initStack(&riwayat);
    
    int pilihan;

    do {
        printMenu();
        scanf("%d", &pilihan);
        getchar(); 

        if (pilihan == 1) {
            char nama[50];
            int layanan;

            printf("\nMasukkan nama nasabah: ");
            fgets(nama, sizeof(nama), stdin);
            nama[strcspn(nama, "\n")] = 0;

            printLayanan();
            scanf("%d", &layanan);
            getchar();

            if (layanan < 1 || layanan > 3) {
                printf("✗ Layanan tidak valid.\n");
                continue;
            }

            Nasabah *nasabah = createNasabah(rand() % 1000, nama);
            Transaksi *transaksi = (Transaksi*)malloc(sizeof(Transaksi));
            transaksi->nasabah = nasabah;
            transaksi->layanan = layanan;

            enqueue(&antrean, transaksi);
            printf("✓ Nasabah %s berhasil ditambahkan ke antrean dengan layanan %s.\n", nama, getLayananName(layanan));

        } else if (pilihan == 2) {
            Transaksi *transaksi = (Transaksi*)dequeue(&antrean);
            if (transaksi) {
                printf("\nMemproses nasabah: %s - %s\n", transaksi->nasabah->nama, getLayananName(transaksi->layanan));
                push(&riwayat, transaksi);
                printf("✓ Layanan selesai diproses dan dipindahkan ke riwayat.\n");
            } else {
                printf("✗ Tidak ada nasabah dalam antrean.\n");
            }

        } else if (pilihan == 3) {
            printf("\n+------+----------------+------------------+\n");
            printf("| No.  | Nama Nasabah   | Layanan          |\n");
            printf("+------+----------------+------------------+\n");

            Queue temp;
            initQueue(&temp);
            int no = 1;

            while (!isEmptyQueue(&antrean)) {
                Transaksi *transaksi = (Transaksi*)dequeue(&antrean);
                printf("| %-4d | %-14s | %-16s |\n", no++, transaksi->nasabah->nama, getLayananName(transaksi->layanan));
                enqueue(&temp, transaksi);
            }

            printf("+------+----------------+------------------+\n");
            printf("Total nasabah dalam antrean: %d\n", no - 1);

            while (!isEmptyQueue(&temp)) {
                enqueue(&antrean, dequeue(&temp));
            }

        } else if (pilihan == 4) {
            Transaksi *transaksi = (Transaksi*)pop(&riwayat);
            if (transaksi) {
                printf("\nTransaksi terakhir: %s - %s\n", transaksi->nasabah->nama, getLayananName(transaksi->layanan));
                enqueue(&antrean, transaksi);
                printf("✓ Transaksi dibatalkan. Nasabah dikembalikan ke antrean.\n");
            } else {
                printf("✗ Tidak ada transaksi yang bisa dibatalkan.\n");
            }

        } else if (pilihan == 5) {
            printf("\n=== Riwayat Transaksi ===\n");

            Stack temp;
            initStack(&temp);
            int no = 1;

            while (!isEmptyStack(&riwayat)) {
                Transaksi *transaksi = (Transaksi*)pop(&riwayat);
                printf("%d. %s - %s\n", no++, transaksi->nasabah->nama, getLayananName(transaksi->layanan));
                push(&temp, transaksi);
            }

            if (no == 1) {
                printf("✗ Tidak ada transaksi dalam riwayat.\n");
            }

            while (!isEmptyStack(&temp)) {
                push(&riwayat, pop(&temp));
            }
        }

    } while (pilihan != 6);

    printf("Terima kasih telah menggunakan layanan bank.\n");
    return 0;
}
