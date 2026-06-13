// fichero 33133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33133;

Registro33133 crear_registro33133(int id) {
    Registro33133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33133(Registro33133 r) {
    return r.valor + r.id;
}
