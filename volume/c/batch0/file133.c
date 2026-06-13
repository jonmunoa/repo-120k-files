// fichero 133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro133;

Registro133 crear_registro133(int id) {
    Registro133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro133(Registro133 r) {
    return r.valor + r.id;
}
