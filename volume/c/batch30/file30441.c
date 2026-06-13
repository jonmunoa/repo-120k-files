// fichero 30441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30441;

Registro30441 crear_registro30441(int id) {
    Registro30441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30441(Registro30441 r) {
    return r.valor + r.id;
}
