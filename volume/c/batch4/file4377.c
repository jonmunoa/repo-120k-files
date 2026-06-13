// fichero 4377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4377;

Registro4377 crear_registro4377(int id) {
    Registro4377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4377(Registro4377 r) {
    return r.valor + r.id;
}
