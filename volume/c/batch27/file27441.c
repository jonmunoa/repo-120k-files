// fichero 27441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27441;

Registro27441 crear_registro27441(int id) {
    Registro27441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27441(Registro27441 r) {
    return r.valor + r.id;
}
