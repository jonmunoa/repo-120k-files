// fichero 14957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14957;

Registro14957 crear_registro14957(int id) {
    Registro14957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14957(Registro14957 r) {
    return r.valor + r.id;
}
