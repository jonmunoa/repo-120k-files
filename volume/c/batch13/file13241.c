// fichero 13241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13241;

Registro13241 crear_registro13241(int id) {
    Registro13241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13241(Registro13241 r) {
    return r.valor + r.id;
}
