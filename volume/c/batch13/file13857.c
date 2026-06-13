// fichero 13857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13857;

Registro13857 crear_registro13857(int id) {
    Registro13857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13857(Registro13857 r) {
    return r.valor + r.id;
}
