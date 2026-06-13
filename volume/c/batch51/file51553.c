// fichero 51553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51553;

Registro51553 crear_registro51553(int id) {
    Registro51553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51553(Registro51553 r) {
    return r.valor + r.id;
}
