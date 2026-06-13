// fichero 42381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42381;

Registro42381 crear_registro42381(int id) {
    Registro42381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42381(Registro42381 r) {
    return r.valor + r.id;
}
