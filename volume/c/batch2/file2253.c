// fichero 2253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2253;

Registro2253 crear_registro2253(int id) {
    Registro2253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2253(Registro2253 r) {
    return r.valor + r.id;
}
