// fichero 46421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46421;

Registro46421 crear_registro46421(int id) {
    Registro46421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46421(Registro46421 r) {
    return r.valor + r.id;
}
