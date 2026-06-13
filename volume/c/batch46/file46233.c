// fichero 46233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46233;

Registro46233 crear_registro46233(int id) {
    Registro46233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46233(Registro46233 r) {
    return r.valor + r.id;
}
