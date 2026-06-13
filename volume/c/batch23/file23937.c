// fichero 23937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23937;

Registro23937 crear_registro23937(int id) {
    Registro23937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23937(Registro23937 r) {
    return r.valor + r.id;
}
