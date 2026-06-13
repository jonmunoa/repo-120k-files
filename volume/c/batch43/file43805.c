// fichero 43805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43805;

Registro43805 crear_registro43805(int id) {
    Registro43805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43805(Registro43805 r) {
    return r.valor + r.id;
}
