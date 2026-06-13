// fichero 14233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14233;

Registro14233 crear_registro14233(int id) {
    Registro14233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14233(Registro14233 r) {
    return r.valor + r.id;
}
