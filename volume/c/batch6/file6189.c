// fichero 6189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6189;

Registro6189 crear_registro6189(int id) {
    Registro6189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6189(Registro6189 r) {
    return r.valor + r.id;
}
