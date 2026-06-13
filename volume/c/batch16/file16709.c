// fichero 16709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16709;

Registro16709 crear_registro16709(int id) {
    Registro16709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16709(Registro16709 r) {
    return r.valor + r.id;
}
