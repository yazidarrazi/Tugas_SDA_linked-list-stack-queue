#include <stdlib.h>
#include <string.h>
#include "nasabah.h"

Nasabah* createNasabah(int id, const char* nama) {
    Nasabah *newNasabah = (Nasabah*)malloc(sizeof(Nasabah));
    if (!newNasabah) return NULL;
    newNasabah->id = id;
    strcpy(newNasabah->nama, nama);
    return newNasabah;
}
