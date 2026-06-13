// fichero 33325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33325;

Registro33325 crear_registro33325(int id) {
    Registro33325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33325(Registro33325 r) {
    return r.valor + r.id;
}
