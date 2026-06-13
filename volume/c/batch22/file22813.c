// fichero 22813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22813;

Registro22813 crear_registro22813(int id) {
    Registro22813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22813(Registro22813 r) {
    return r.valor + r.id;
}
