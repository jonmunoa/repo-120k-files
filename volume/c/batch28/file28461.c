// fichero 28461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28461;

Registro28461 crear_registro28461(int id) {
    Registro28461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28461(Registro28461 r) {
    return r.valor + r.id;
}
