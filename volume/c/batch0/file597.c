// fichero 597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro597;

Registro597 crear_registro597(int id) {
    Registro597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro597(Registro597 r) {
    return r.valor + r.id;
}
