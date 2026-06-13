// fichero 15641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15641;

Registro15641 crear_registro15641(int id) {
    Registro15641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15641(Registro15641 r) {
    return r.valor + r.id;
}
