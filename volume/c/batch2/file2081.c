// fichero 2081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2081;

Registro2081 crear_registro2081(int id) {
    Registro2081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2081(Registro2081 r) {
    return r.valor + r.id;
}
