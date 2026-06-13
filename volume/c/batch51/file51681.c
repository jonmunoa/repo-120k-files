// fichero 51681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51681;

Registro51681 crear_registro51681(int id) {
    Registro51681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51681(Registro51681 r) {
    return r.valor + r.id;
}
