// fichero 51141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51141;

Registro51141 crear_registro51141(int id) {
    Registro51141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51141(Registro51141 r) {
    return r.valor + r.id;
}
