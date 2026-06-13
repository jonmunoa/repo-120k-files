// fichero 26441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26441;

Registro26441 crear_registro26441(int id) {
    Registro26441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26441(Registro26441 r) {
    return r.valor + r.id;
}
