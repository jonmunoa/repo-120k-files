// fichero 30461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30461;

Registro30461 crear_registro30461(int id) {
    Registro30461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30461(Registro30461 r) {
    return r.valor + r.id;
}
