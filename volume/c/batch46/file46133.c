// fichero 46133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46133;

Registro46133 crear_registro46133(int id) {
    Registro46133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46133(Registro46133 r) {
    return r.valor + r.id;
}
