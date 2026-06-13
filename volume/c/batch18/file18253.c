// fichero 18253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18253;

Registro18253 crear_registro18253(int id) {
    Registro18253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18253(Registro18253 r) {
    return r.valor + r.id;
}
