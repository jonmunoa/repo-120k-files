// fichero 1733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1733;

Registro1733 crear_registro1733(int id) {
    Registro1733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1733(Registro1733 r) {
    return r.valor + r.id;
}
