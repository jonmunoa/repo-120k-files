// fichero 28973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28973;

Registro28973 crear_registro28973(int id) {
    Registro28973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28973(Registro28973 r) {
    return r.valor + r.id;
}
