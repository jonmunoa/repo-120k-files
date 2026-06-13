// fichero 46825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46825;

Registro46825 crear_registro46825(int id) {
    Registro46825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46825(Registro46825 r) {
    return r.valor + r.id;
}
