// fichero 48885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48885;

Registro48885 crear_registro48885(int id) {
    Registro48885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48885(Registro48885 r) {
    return r.valor + r.id;
}
