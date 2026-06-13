// fichero 16413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16413;

Registro16413 crear_registro16413(int id) {
    Registro16413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16413(Registro16413 r) {
    return r.valor + r.id;
}
