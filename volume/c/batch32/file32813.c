// fichero 32813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32813;

Registro32813 crear_registro32813(int id) {
    Registro32813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32813(Registro32813 r) {
    return r.valor + r.id;
}
