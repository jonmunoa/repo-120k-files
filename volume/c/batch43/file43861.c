// fichero 43861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43861;

Registro43861 crear_registro43861(int id) {
    Registro43861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43861(Registro43861 r) {
    return r.valor + r.id;
}
