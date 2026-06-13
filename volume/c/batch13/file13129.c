// fichero 13129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13129;

Registro13129 crear_registro13129(int id) {
    Registro13129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13129(Registro13129 r) {
    return r.valor + r.id;
}
