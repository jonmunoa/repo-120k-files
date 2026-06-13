// fichero 51065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51065;

Registro51065 crear_registro51065(int id) {
    Registro51065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51065(Registro51065 r) {
    return r.valor + r.id;
}
