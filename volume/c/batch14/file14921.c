// fichero 14921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14921;

Registro14921 crear_registro14921(int id) {
    Registro14921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14921(Registro14921 r) {
    return r.valor + r.id;
}
