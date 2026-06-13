// fichero 27757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27757;

Registro27757 crear_registro27757(int id) {
    Registro27757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27757(Registro27757 r) {
    return r.valor + r.id;
}
