// fichero 15573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15573;

Registro15573 crear_registro15573(int id) {
    Registro15573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15573(Registro15573 r) {
    return r.valor + r.id;
}
