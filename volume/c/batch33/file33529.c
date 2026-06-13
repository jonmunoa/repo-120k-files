// fichero 33529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33529;

Registro33529 crear_registro33529(int id) {
    Registro33529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33529(Registro33529 r) {
    return r.valor + r.id;
}
