// fichero 13825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13825;

Registro13825 crear_registro13825(int id) {
    Registro13825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13825(Registro13825 r) {
    return r.valor + r.id;
}
