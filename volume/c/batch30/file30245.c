// fichero 30245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30245;

Registro30245 crear_registro30245(int id) {
    Registro30245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30245(Registro30245 r) {
    return r.valor + r.id;
}
