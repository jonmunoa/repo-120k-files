// fichero 15589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15589;

Registro15589 crear_registro15589(int id) {
    Registro15589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15589(Registro15589 r) {
    return r.valor + r.id;
}
