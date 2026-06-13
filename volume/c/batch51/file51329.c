// fichero 51329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51329;

Registro51329 crear_registro51329(int id) {
    Registro51329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51329(Registro51329 r) {
    return r.valor + r.id;
}
