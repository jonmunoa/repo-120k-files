// fichero 51477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51477;

Registro51477 crear_registro51477(int id) {
    Registro51477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51477(Registro51477 r) {
    return r.valor + r.id;
}
