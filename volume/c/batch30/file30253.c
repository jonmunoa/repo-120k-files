// fichero 30253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30253;

Registro30253 crear_registro30253(int id) {
    Registro30253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30253(Registro30253 r) {
    return r.valor + r.id;
}
