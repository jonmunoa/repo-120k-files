// fichero 42441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42441;

Registro42441 crear_registro42441(int id) {
    Registro42441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42441(Registro42441 r) {
    return r.valor + r.id;
}
