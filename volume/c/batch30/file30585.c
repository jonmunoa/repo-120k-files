// fichero 30585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30585;

Registro30585 crear_registro30585(int id) {
    Registro30585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30585(Registro30585 r) {
    return r.valor + r.id;
}
