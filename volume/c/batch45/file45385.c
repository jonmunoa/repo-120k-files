// fichero 45385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45385;

Registro45385 crear_registro45385(int id) {
    Registro45385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45385(Registro45385 r) {
    return r.valor + r.id;
}
