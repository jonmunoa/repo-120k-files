// fichero 13845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13845;

Registro13845 crear_registro13845(int id) {
    Registro13845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13845(Registro13845 r) {
    return r.valor + r.id;
}
