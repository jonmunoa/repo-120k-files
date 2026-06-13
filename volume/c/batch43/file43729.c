// fichero 43729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43729;

Registro43729 crear_registro43729(int id) {
    Registro43729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43729(Registro43729 r) {
    return r.valor + r.id;
}
