// fichero 45885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45885;

Registro45885 crear_registro45885(int id) {
    Registro45885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45885(Registro45885 r) {
    return r.valor + r.id;
}
