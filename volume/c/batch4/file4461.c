// fichero 4461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4461;

Registro4461 crear_registro4461(int id) {
    Registro4461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4461(Registro4461 r) {
    return r.valor + r.id;
}
