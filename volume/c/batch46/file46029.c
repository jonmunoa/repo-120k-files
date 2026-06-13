// fichero 46029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46029;

Registro46029 crear_registro46029(int id) {
    Registro46029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46029(Registro46029 r) {
    return r.valor + r.id;
}
