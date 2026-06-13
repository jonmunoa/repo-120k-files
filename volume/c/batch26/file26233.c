// fichero 26233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26233;

Registro26233 crear_registro26233(int id) {
    Registro26233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26233(Registro26233 r) {
    return r.valor + r.id;
}
