// fichero 48005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48005;

Registro48005 crear_registro48005(int id) {
    Registro48005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48005(Registro48005 r) {
    return r.valor + r.id;
}
