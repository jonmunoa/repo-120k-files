// fichero 30473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30473;

Registro30473 crear_registro30473(int id) {
    Registro30473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30473(Registro30473 r) {
    return r.valor + r.id;
}
