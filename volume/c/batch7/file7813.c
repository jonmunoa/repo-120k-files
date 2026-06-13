// fichero 7813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7813;

Registro7813 crear_registro7813(int id) {
    Registro7813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7813(Registro7813 r) {
    return r.valor + r.id;
}
