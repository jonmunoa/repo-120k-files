// fichero 2629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2629;

Registro2629 crear_registro2629(int id) {
    Registro2629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2629(Registro2629 r) {
    return r.valor + r.id;
}
