// fichero 51229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51229;

Registro51229 crear_registro51229(int id) {
    Registro51229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51229(Registro51229 r) {
    return r.valor + r.id;
}
