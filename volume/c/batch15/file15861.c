// fichero 15861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15861;

Registro15861 crear_registro15861(int id) {
    Registro15861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15861(Registro15861 r) {
    return r.valor + r.id;
}
