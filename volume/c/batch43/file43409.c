// fichero 43409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43409;

Registro43409 crear_registro43409(int id) {
    Registro43409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43409(Registro43409 r) {
    return r.valor + r.id;
}
