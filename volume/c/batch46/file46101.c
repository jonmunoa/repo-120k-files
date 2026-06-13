// fichero 46101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46101;

Registro46101 crear_registro46101(int id) {
    Registro46101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46101(Registro46101 r) {
    return r.valor + r.id;
}
