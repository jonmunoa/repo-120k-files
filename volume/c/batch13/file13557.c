// fichero 13557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13557;

Registro13557 crear_registro13557(int id) {
    Registro13557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13557(Registro13557 r) {
    return r.valor + r.id;
}
