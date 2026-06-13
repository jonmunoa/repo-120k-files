// fichero 13185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13185;

Registro13185 crear_registro13185(int id) {
    Registro13185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13185(Registro13185 r) {
    return r.valor + r.id;
}
