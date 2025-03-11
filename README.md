# Sistem Antrean Bank

## PENJELASAN PROGRAM
Program ini merupakan sistem antrean bank sederhana yang dirancang untuk mengelola antrean nasabah secara efisien. Program ini menggunakan struktur data utama, yaitu Linked List untuk menyusun antrean, Queue (FIFO) untuk mengelola urutan layanan nasabah, dan Stack untuk menyimpan riwayat transaksi serta fitur pembatalan transaksi terakhir (undo).

Nasabah yang masuk ke dalam antrean akan diproses secara berurutan, dan setelah selesai, data mereka akan disimpan dalam riwayat transaksi. Jika diperlukan, transaksi terakhir dapat dibatalkan dan nasabah akan dikembalikan ke antrean. 

## CARA KERJA PROGRAM
1. *Menambahkan Nasabah:*
   - Pengguna memasukkan nama nasabah.
   - Memilih jenis layanan (Setor Tunai, Tarik Tunai, atau Pembukaan Rekening).
   - Nasabah ditambahkan ke antrean menggunakan konsep Queue.

2. *Memproses Nasabah:*
   - Nasabah pertama dalam antrean akan diproses.
   - Setelah layanan selesai, data nasabah dipindahkan ke riwayat transaksi (Stack).

3. *Menampilkan Antrean:*
   - Menampilkan daftar nasabah yang sedang menunggu layanan.
   - Jika antrean kosong, program akan menampilkan pesan yang sesuai.

4. *Membatalkan Transaksi (Undo):*
   - Transaksi terakhir yang telah diproses dapat dibatalkan.
   - Data nasabah dikembalikan ke antrean dari Stack.

5. *Menampilkan Riwayat Transaksi:*
   - Menampilkan daftar nasabah yang telah selesai diproses.
   - Jika tidak ada transaksi yang selesai, program akan menampilkan pesan yang sesuai.

6. *Keluar:*
   - Mengakhiri eksekusi program.
