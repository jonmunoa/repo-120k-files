// fichero 16321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16321;

Registro16321 crear_registro16321(int id) {
    Registro16321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16321(Registro16321 r) {
    return r.valor + r.id;
}
