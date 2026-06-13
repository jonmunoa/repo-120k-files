// fichero 37357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37357;

Registro37357 crear_registro37357(int id) {
    Registro37357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37357(Registro37357 r) {
    return r.valor + r.id;
}
