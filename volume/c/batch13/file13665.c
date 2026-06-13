// fichero 13665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13665;

Registro13665 crear_registro13665(int id) {
    Registro13665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13665(Registro13665 r) {
    return r.valor + r.id;
}
