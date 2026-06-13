// fichero 15665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15665;

Registro15665 crear_registro15665(int id) {
    Registro15665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15665(Registro15665 r) {
    return r.valor + r.id;
}
