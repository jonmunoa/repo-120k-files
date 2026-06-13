// fichero 43073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43073;

Registro43073 crear_registro43073(int id) {
    Registro43073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43073(Registro43073 r) {
    return r.valor + r.id;
}
