// fichero 2097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2097;

Registro2097 crear_registro2097(int id) {
    Registro2097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2097(Registro2097 r) {
    return r.valor + r.id;
}
