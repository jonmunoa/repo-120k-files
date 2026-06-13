// fichero 45433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45433;

Registro45433 crear_registro45433(int id) {
    Registro45433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45433(Registro45433 r) {
    return r.valor + r.id;
}
