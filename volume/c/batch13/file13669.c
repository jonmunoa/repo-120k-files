// fichero 13669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13669;

Registro13669 crear_registro13669(int id) {
    Registro13669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13669(Registro13669 r) {
    return r.valor + r.id;
}
