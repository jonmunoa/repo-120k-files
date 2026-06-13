// fichero 24825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24825;

Registro24825 crear_registro24825(int id) {
    Registro24825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24825(Registro24825 r) {
    return r.valor + r.id;
}
