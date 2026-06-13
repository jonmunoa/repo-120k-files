// fichero 51417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51417;

Registro51417 crear_registro51417(int id) {
    Registro51417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51417(Registro51417 r) {
    return r.valor + r.id;
}
