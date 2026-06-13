// fichero 42377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42377;

Registro42377 crear_registro42377(int id) {
    Registro42377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42377(Registro42377 r) {
    return r.valor + r.id;
}
