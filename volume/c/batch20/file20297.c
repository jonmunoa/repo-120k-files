// fichero 20297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20297;

Registro20297 crear_registro20297(int id) {
    Registro20297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20297(Registro20297 r) {
    return r.valor + r.id;
}
