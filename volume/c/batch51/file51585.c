// fichero 51585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51585;

Registro51585 crear_registro51585(int id) {
    Registro51585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51585(Registro51585 r) {
    return r.valor + r.id;
}
