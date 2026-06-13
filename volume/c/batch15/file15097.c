// fichero 15097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15097;

Registro15097 crear_registro15097(int id) {
    Registro15097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15097(Registro15097 r) {
    return r.valor + r.id;
}
