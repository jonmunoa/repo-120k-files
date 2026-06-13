// fichero 15413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15413;

Registro15413 crear_registro15413(int id) {
    Registro15413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15413(Registro15413 r) {
    return r.valor + r.id;
}
