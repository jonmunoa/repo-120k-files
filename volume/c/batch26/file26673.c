// fichero 26673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26673;

Registro26673 crear_registro26673(int id) {
    Registro26673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26673(Registro26673 r) {
    return r.valor + r.id;
}
