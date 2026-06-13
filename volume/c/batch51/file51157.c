// fichero 51157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51157;

Registro51157 crear_registro51157(int id) {
    Registro51157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51157(Registro51157 r) {
    return r.valor + r.id;
}
