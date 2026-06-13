// fichero 46297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46297;

Registro46297 crear_registro46297(int id) {
    Registro46297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46297(Registro46297 r) {
    return r.valor + r.id;
}
