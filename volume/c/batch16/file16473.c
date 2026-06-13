// fichero 16473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16473;

Registro16473 crear_registro16473(int id) {
    Registro16473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16473(Registro16473 r) {
    return r.valor + r.id;
}
