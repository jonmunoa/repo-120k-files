// fichero 37125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37125;

Registro37125 crear_registro37125(int id) {
    Registro37125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37125(Registro37125 r) {
    return r.valor + r.id;
}
