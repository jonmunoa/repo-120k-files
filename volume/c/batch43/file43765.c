// fichero 43765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43765;

Registro43765 crear_registro43765(int id) {
    Registro43765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43765(Registro43765 r) {
    return r.valor + r.id;
}
