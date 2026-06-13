// fichero 7441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7441;

Registro7441 crear_registro7441(int id) {
    Registro7441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7441(Registro7441 r) {
    return r.valor + r.id;
}
