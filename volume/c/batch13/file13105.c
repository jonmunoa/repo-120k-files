// fichero 13105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13105;

Registro13105 crear_registro13105(int id) {
    Registro13105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13105(Registro13105 r) {
    return r.valor + r.id;
}
