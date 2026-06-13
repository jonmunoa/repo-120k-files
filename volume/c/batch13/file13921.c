// fichero 13921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13921;

Registro13921 crear_registro13921(int id) {
    Registro13921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13921(Registro13921 r) {
    return r.valor + r.id;
}
