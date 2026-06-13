// fichero 44441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44441;

Registro44441 crear_registro44441(int id) {
    Registro44441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44441(Registro44441 r) {
    return r.valor + r.id;
}
