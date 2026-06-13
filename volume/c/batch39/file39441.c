// fichero 39441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39441;

Registro39441 crear_registro39441(int id) {
    Registro39441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39441(Registro39441 r) {
    return r.valor + r.id;
}
