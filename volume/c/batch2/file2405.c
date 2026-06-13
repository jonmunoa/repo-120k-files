// fichero 2405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2405;

Registro2405 crear_registro2405(int id) {
    Registro2405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2405(Registro2405 r) {
    return r.valor + r.id;
}
