// fichero 39461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39461;

Registro39461 crear_registro39461(int id) {
    Registro39461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39461(Registro39461 r) {
    return r.valor + r.id;
}
