// fichero 51533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51533;

Registro51533 crear_registro51533(int id) {
    Registro51533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51533(Registro51533 r) {
    return r.valor + r.id;
}
