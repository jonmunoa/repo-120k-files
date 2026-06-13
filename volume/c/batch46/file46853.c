// fichero 46853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46853;

Registro46853 crear_registro46853(int id) {
    Registro46853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46853(Registro46853 r) {
    return r.valor + r.id;
}
