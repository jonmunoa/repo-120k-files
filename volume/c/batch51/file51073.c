// fichero 51073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51073;

Registro51073 crear_registro51073(int id) {
    Registro51073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51073(Registro51073 r) {
    return r.valor + r.id;
}
