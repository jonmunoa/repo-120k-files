// fichero 4421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4421;

Registro4421 crear_registro4421(int id) {
    Registro4421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4421(Registro4421 r) {
    return r.valor + r.id;
}
