// fichero 48141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48141;

Registro48141 crear_registro48141(int id) {
    Registro48141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48141(Registro48141 r) {
    return r.valor + r.id;
}
