// fichero 46013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46013;

Registro46013 crear_registro46013(int id) {
    Registro46013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46013(Registro46013 r) {
    return r.valor + r.id;
}
