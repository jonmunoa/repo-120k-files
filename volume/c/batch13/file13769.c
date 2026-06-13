// fichero 13769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13769;

Registro13769 crear_registro13769(int id) {
    Registro13769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13769(Registro13769 r) {
    return r.valor + r.id;
}
