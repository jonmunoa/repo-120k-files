// fichero 37453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37453;

Registro37453 crear_registro37453(int id) {
    Registro37453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37453(Registro37453 r) {
    return r.valor + r.id;
}
