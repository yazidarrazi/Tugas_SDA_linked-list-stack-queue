# Sistem Antrean Bank

Anggota Kelompok 2:
1. ABDI DZIL IKRAM (2408107010024)
2. AZIRA KANIA (2408107010025)
3. ZAHRA RIZKYNA (2408107010031)
4. AULIA LUTFI (2408107010033)
5. MUHAMMAD YAZID ARRAZI (2408107010072)
  
**PENJELASAN PROGRAM**
Program ini merupakan sistem antrean bank sederhana yang dirancang untuk mengelola antrean nasabah secara efisien. Program ini menggunakan struktur data utama, yaitu Linked List untuk menyusun antrean, Queue (FIFO) untuk mengelola urutan layanan nasabah, dan Stack untuk menyimpan riwayat transaksi serta fitur pembatalan transaksi terakhir (undo).

Nasabah yang masuk ke dalam antrean akan diproses secara berurutan, dan setelah selesai, data mereka akan disimpan dalam riwayat transaksi. Jika diperlukan, transaksi terakhir dapat dibatalkan dan nasabah akan dikembalikan ke antrean. 

**CARA KERJA PROGRAM**
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

**Penjelasan Struktur Program dan Implementasi Struktur Data**
- **Queue (Linked List):** Digunakan untuk menyimpan antrean nasabah yang menunggu layanan.
- **Stack:** Digunakan untuk menyimpan riwayat transaksi nasabah yang telah diproses dan memungkinkan fitur undo.
- **Node:** Struktur dasar yang menyimpan informasi nasabah, termasuk nama dan jenis layanan.

Program ini memastikan bahwa antrean berjalan dengan efisien menggunakan metode FIFO, sedangkan riwayat transaksi disusun dalam Stack untuk kemudahan pembatalan transaksi terakhir.

**Cara Kompilasi**
Program ini menggunakan Makefile untuk kompilasi. Jalankan perintah **Make** untuk mengompilasi
Setelah kompilasi selesai, jalankan program dengan perintah **./program**
Untuk membersihkan file hasil kompilasi, gunakan perintah **make clean**

**SCREENSHOOT HASIL EKSEKUSI PROGRAM**
Berikut adalah contoh tampilan saat program dijalankan:
![Screenshot 2025-03-12 063045](https://github.com/user-attachments/assets/72c6d123-d14e-4798-a78a-069402698660)
![Screenshot 2025-03-12 063056](https://github.com/user-attachments/assets/0165e0b1-f99e-4a95-98de-5c8e43da9104)
![Screenshot 2025-03-12 063109](https://github.com/user-attachments/assets/867328f0-ccd8-4db6-836e-3bee57f03059)
