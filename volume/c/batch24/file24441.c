// fichero 24441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24441;

Registro24441 crear_registro24441(int id) {
    Registro24441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24441(Registro24441 r) {
    return r.valor + r.id;
}
