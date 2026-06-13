// fichero 45097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45097;

Registro45097 crear_registro45097(int id) {
    Registro45097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45097(Registro45097 r) {
    return r.valor + r.id;
}
