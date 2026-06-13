// fichero 32441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32441;

Registro32441 crear_registro32441(int id) {
    Registro32441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32441(Registro32441 r) {
    return r.valor + r.id;
}
