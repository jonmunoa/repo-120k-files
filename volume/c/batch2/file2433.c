// fichero 2433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2433;

Registro2433 crear_registro2433(int id) {
    Registro2433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2433(Registro2433 r) {
    return r.valor + r.id;
}
