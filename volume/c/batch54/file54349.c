// fichero 54349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54349;

Registro54349 crear_registro54349(int id) {
    Registro54349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54349(Registro54349 r) {
    return r.valor + r.id;
}
