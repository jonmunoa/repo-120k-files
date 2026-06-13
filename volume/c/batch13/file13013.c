// fichero 13013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13013;

Registro13013 crear_registro13013(int id) {
    Registro13013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13013(Registro13013 r) {
    return r.valor + r.id;
}
