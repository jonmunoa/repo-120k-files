// fichero 44253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44253;

Registro44253 crear_registro44253(int id) {
    Registro44253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44253(Registro44253 r) {
    return r.valor + r.id;
}
