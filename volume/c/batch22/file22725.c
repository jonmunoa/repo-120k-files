// fichero 22725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22725;

Registro22725 crear_registro22725(int id) {
    Registro22725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22725(Registro22725 r) {
    return r.valor + r.id;
}
