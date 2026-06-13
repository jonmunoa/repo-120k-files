// fichero 17597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17597;

Registro17597 crear_registro17597(int id) {
    Registro17597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17597(Registro17597 r) {
    return r.valor + r.id;
}
