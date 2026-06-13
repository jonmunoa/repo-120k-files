// fichero 4989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4989;

Registro4989 crear_registro4989(int id) {
    Registro4989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4989(Registro4989 r) {
    return r.valor + r.id;
}
