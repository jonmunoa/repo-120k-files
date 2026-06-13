// fichero 2665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2665;

Registro2665 crear_registro2665(int id) {
    Registro2665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2665(Registro2665 r) {
    return r.valor + r.id;
}
