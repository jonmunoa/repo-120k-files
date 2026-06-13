// fichero 24097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24097;

Registro24097 crear_registro24097(int id) {
    Registro24097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24097(Registro24097 r) {
    return r.valor + r.id;
}
