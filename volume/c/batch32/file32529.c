// fichero 32529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32529;

Registro32529 crear_registro32529(int id) {
    Registro32529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32529(Registro32529 r) {
    return r.valor + r.id;
}
