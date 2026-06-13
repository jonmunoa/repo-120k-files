// fichero 32245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32245;

Registro32245 crear_registro32245(int id) {
    Registro32245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32245(Registro32245 r) {
    return r.valor + r.id;
}
