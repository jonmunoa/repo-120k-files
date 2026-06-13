// fichero 48989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48989;

Registro48989 crear_registro48989(int id) {
    Registro48989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48989(Registro48989 r) {
    return r.valor + r.id;
}
