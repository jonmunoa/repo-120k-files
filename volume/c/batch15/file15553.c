// fichero 15553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15553;

Registro15553 crear_registro15553(int id) {
    Registro15553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15553(Registro15553 r) {
    return r.valor + r.id;
}
