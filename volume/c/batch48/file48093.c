// fichero 48093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48093;

Registro48093 crear_registro48093(int id) {
    Registro48093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48093(Registro48093 r) {
    return r.valor + r.id;
}
