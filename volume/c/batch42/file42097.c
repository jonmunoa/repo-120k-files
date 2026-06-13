// fichero 42097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42097;

Registro42097 crear_registro42097(int id) {
    Registro42097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42097(Registro42097 r) {
    return r.valor + r.id;
}
