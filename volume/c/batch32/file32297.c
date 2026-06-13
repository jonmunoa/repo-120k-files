// fichero 32297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32297;

Registro32297 crear_registro32297(int id) {
    Registro32297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32297(Registro32297 r) {
    return r.valor + r.id;
}
