// fichero 2969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2969;

Registro2969 crear_registro2969(int id) {
    Registro2969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2969(Registro2969 r) {
    return r.valor + r.id;
}
