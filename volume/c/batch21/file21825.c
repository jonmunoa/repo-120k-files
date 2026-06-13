// fichero 21825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21825;

Registro21825 crear_registro21825(int id) {
    Registro21825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21825(Registro21825 r) {
    return r.valor + r.id;
}
