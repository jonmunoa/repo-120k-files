// fichero 1473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1473;

Registro1473 crear_registro1473(int id) {
    Registro1473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1473(Registro1473 r) {
    return r.valor + r.id;
}
