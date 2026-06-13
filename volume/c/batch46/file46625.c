// fichero 46625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46625;

Registro46625 crear_registro46625(int id) {
    Registro46625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46625(Registro46625 r) {
    return r.valor + r.id;
}
