// fichero 42469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42469;

Registro42469 crear_registro42469(int id) {
    Registro42469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42469(Registro42469 r) {
    return r.valor + r.id;
}
