// fichero 54145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54145;

Registro54145 crear_registro54145(int id) {
    Registro54145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54145(Registro54145 r) {
    return r.valor + r.id;
}
