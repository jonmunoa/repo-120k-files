// fichero 19337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19337;

Registro19337 crear_registro19337(int id) {
    Registro19337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19337(Registro19337 r) {
    return r.valor + r.id;
}
