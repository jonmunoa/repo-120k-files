// fichero 5441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5441;

Registro5441 crear_registro5441(int id) {
    Registro5441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5441(Registro5441 r) {
    return r.valor + r.id;
}
