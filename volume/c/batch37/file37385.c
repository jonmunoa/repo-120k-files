// fichero 37385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37385;

Registro37385 crear_registro37385(int id) {
    Registro37385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37385(Registro37385 r) {
    return r.valor + r.id;
}
