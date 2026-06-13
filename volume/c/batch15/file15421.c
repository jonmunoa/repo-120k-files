// fichero 15421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15421;

Registro15421 crear_registro15421(int id) {
    Registro15421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15421(Registro15421 r) {
    return r.valor + r.id;
}
