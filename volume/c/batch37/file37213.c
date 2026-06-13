// fichero 37213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37213;

Registro37213 crear_registro37213(int id) {
    Registro37213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37213(Registro37213 r) {
    return r.valor + r.id;
}
