// fichero 14349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14349;

Registro14349 crear_registro14349(int id) {
    Registro14349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14349(Registro14349 r) {
    return r.valor + r.id;
}
