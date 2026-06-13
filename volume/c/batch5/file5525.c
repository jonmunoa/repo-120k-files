// fichero 5525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5525;

Registro5525 crear_registro5525(int id) {
    Registro5525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5525(Registro5525 r) {
    return r.valor + r.id;
}
