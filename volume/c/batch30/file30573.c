// fichero 30573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30573;

Registro30573 crear_registro30573(int id) {
    Registro30573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30573(Registro30573 r) {
    return r.valor + r.id;
}
