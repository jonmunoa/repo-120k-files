// fichero 26385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26385;

Registro26385 crear_registro26385(int id) {
    Registro26385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26385(Registro26385 r) {
    return r.valor + r.id;
}
