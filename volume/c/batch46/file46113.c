// fichero 46113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46113;

Registro46113 crear_registro46113(int id) {
    Registro46113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46113(Registro46113 r) {
    return r.valor + r.id;
}
