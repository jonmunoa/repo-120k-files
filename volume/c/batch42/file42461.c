// fichero 42461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42461;

Registro42461 crear_registro42461(int id) {
    Registro42461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42461(Registro42461 r) {
    return r.valor + r.id;
}
