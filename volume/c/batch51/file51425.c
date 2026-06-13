// fichero 51425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51425;

Registro51425 crear_registro51425(int id) {
    Registro51425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51425(Registro51425 r) {
    return r.valor + r.id;
}
