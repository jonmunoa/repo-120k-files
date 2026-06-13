// fichero 2357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2357;

Registro2357 crear_registro2357(int id) {
    Registro2357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2357(Registro2357 r) {
    return r.valor + r.id;
}
