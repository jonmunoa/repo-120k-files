// fichero 13157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13157;

Registro13157 crear_registro13157(int id) {
    Registro13157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13157(Registro13157 r) {
    return r.valor + r.id;
}
