// fichero 34861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34861;

Registro34861 crear_registro34861(int id) {
    Registro34861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34861(Registro34861 r) {
    return r.valor + r.id;
}
