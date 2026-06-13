// fichero 46189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46189;

Registro46189 crear_registro46189(int id) {
    Registro46189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46189(Registro46189 r) {
    return r.valor + r.id;
}
