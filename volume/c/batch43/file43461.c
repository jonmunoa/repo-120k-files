// fichero 43461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43461;

Registro43461 crear_registro43461(int id) {
    Registro43461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43461(Registro43461 r) {
    return r.valor + r.id;
}
