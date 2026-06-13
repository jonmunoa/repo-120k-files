// fichero 46725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46725;

Registro46725 crear_registro46725(int id) {
    Registro46725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46725(Registro46725 r) {
    return r.valor + r.id;
}
