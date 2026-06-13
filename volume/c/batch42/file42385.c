// fichero 42385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42385;

Registro42385 crear_registro42385(int id) {
    Registro42385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42385(Registro42385 r) {
    return r.valor + r.id;
}
