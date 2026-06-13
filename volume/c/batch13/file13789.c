// fichero 13789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13789;

Registro13789 crear_registro13789(int id) {
    Registro13789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13789(Registro13789 r) {
    return r.valor + r.id;
}
