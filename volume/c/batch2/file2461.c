// fichero 2461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2461;

Registro2461 crear_registro2461(int id) {
    Registro2461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2461(Registro2461 r) {
    return r.valor + r.id;
}
