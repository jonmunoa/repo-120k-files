// fichero 37481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37481;

Registro37481 crear_registro37481(int id) {
    Registro37481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37481(Registro37481 r) {
    return r.valor + r.id;
}
