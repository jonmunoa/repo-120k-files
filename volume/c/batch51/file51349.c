// fichero 51349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51349;

Registro51349 crear_registro51349(int id) {
    Registro51349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51349(Registro51349 r) {
    return r.valor + r.id;
}
