// fichero 33441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33441;

Registro33441 crear_registro33441(int id) {
    Registro33441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33441(Registro33441 r) {
    return r.valor + r.id;
}
