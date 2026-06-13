// fichero 37273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37273;

Registro37273 crear_registro37273(int id) {
    Registro37273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37273(Registro37273 r) {
    return r.valor + r.id;
}
