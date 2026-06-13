// fichero 48213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48213;

Registro48213 crear_registro48213(int id) {
    Registro48213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48213(Registro48213 r) {
    return r.valor + r.id;
}
