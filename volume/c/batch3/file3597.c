// fichero 3597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3597;

Registro3597 crear_registro3597(int id) {
    Registro3597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3597(Registro3597 r) {
    return r.valor + r.id;
}
