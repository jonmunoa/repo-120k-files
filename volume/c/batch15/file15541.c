// fichero 15541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15541;

Registro15541 crear_registro15541(int id) {
    Registro15541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15541(Registro15541 r) {
    return r.valor + r.id;
}
