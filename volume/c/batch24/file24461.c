// fichero 24461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24461;

Registro24461 crear_registro24461(int id) {
    Registro24461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24461(Registro24461 r) {
    return r.valor + r.id;
}
