// fichero 28413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28413;

Registro28413 crear_registro28413(int id) {
    Registro28413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28413(Registro28413 r) {
    return r.valor + r.id;
}
