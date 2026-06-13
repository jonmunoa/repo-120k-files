// fichero 49341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49341;

Registro49341 crear_registro49341(int id) {
    Registro49341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49341(Registro49341 r) {
    return r.valor + r.id;
}
