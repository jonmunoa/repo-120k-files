// fichero 42481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42481;

Registro42481 crear_registro42481(int id) {
    Registro42481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42481(Registro42481 r) {
    return r.valor + r.id;
}
