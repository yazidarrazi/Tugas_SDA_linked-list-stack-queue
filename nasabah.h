#ifndef NASABAH_H
#define NASABAH_H

typedef struct {
    int id;
    char nama[50];
} Nasabah;

Nasabah* createNasabah(int id, const char* nama);

#endif
