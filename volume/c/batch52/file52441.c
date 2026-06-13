// fichero 52441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52441;

Registro52441 crear_registro52441(int id) {
    Registro52441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52441(Registro52441 r) {
    return r.valor + r.id;
}
