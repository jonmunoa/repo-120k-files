// fichero 4521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4521;

Registro4521 crear_registro4521(int id) {
    Registro4521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4521(Registro4521 r) {
    return r.valor + r.id;
}
