// fichero 5537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5537;

Registro5537 crear_registro5537(int id) {
    Registro5537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5537(Registro5537 r) {
    return r.valor + r.id;
}
