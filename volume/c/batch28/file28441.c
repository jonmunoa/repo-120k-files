// fichero 28441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28441;

Registro28441 crear_registro28441(int id) {
    Registro28441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28441(Registro28441 r) {
    return r.valor + r.id;
}
