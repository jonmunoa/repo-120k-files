// fichero 33861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33861;

Registro33861 crear_registro33861(int id) {
    Registro33861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33861(Registro33861 r) {
    return r.valor + r.id;
}
