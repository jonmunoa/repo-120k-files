// fichero 51833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51833;

Registro51833 crear_registro51833(int id) {
    Registro51833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51833(Registro51833 r) {
    return r.valor + r.id;
}
