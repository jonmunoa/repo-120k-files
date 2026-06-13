// fichero 14441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14441;

Registro14441 crear_registro14441(int id) {
    Registro14441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14441(Registro14441 r) {
    return r.valor + r.id;
}
