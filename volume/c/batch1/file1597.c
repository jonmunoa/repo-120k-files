// fichero 1597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1597;

Registro1597 crear_registro1597(int id) {
    Registro1597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1597(Registro1597 r) {
    return r.valor + r.id;
}
