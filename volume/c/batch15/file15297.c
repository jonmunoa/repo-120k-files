// fichero 15297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15297;

Registro15297 crear_registro15297(int id) {
    Registro15297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15297(Registro15297 r) {
    return r.valor + r.id;
}
