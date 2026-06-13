// fichero 13937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13937;

Registro13937 crear_registro13937(int id) {
    Registro13937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13937(Registro13937 r) {
    return r.valor + r.id;
}
