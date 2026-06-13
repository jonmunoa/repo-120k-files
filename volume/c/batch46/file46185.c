// fichero 46185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46185;

Registro46185 crear_registro46185(int id) {
    Registro46185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46185(Registro46185 r) {
    return r.valor + r.id;
}
