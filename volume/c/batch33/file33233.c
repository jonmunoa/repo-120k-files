// fichero 33233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33233;

Registro33233 crear_registro33233(int id) {
    Registro33233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33233(Registro33233 r) {
    return r.valor + r.id;
}
