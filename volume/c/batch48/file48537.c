// fichero 48537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48537;

Registro48537 crear_registro48537(int id) {
    Registro48537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48537(Registro48537 r) {
    return r.valor + r.id;
}
