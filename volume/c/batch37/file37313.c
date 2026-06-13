// fichero 37313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37313;

Registro37313 crear_registro37313(int id) {
    Registro37313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37313(Registro37313 r) {
    return r.valor + r.id;
}
