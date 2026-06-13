// fichero 15405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15405;

Registro15405 crear_registro15405(int id) {
    Registro15405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15405(Registro15405 r) {
    return r.valor + r.id;
}
