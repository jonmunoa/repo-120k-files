// fichero 4481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4481;

Registro4481 crear_registro4481(int id) {
    Registro4481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4481(Registro4481 r) {
    return r.valor + r.id;
}
