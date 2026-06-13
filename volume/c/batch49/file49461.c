// fichero 49461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49461;

Registro49461 crear_registro49461(int id) {
    Registro49461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49461(Registro49461 r) {
    return r.valor + r.id;
}
