// fichero 33101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33101;

Registro33101 crear_registro33101(int id) {
    Registro33101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33101(Registro33101 r) {
    return r.valor + r.id;
}
