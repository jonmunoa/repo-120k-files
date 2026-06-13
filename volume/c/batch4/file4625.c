// fichero 4625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4625;

Registro4625 crear_registro4625(int id) {
    Registro4625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4625(Registro4625 r) {
    return r.valor + r.id;
}
