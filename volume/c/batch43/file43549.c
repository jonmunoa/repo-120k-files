// fichero 43549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43549;

Registro43549 crear_registro43549(int id) {
    Registro43549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43549(Registro43549 r) {
    return r.valor + r.id;
}
