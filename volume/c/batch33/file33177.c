// fichero 33177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33177;

Registro33177 crear_registro33177(int id) {
    Registro33177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33177(Registro33177 r) {
    return r.valor + r.id;
}
