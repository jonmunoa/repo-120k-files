// fichero 48933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48933;

Registro48933 crear_registro48933(int id) {
    Registro48933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48933(Registro48933 r) {
    return r.valor + r.id;
}
