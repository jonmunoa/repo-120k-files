// fichero 13265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13265;

Registro13265 crear_registro13265(int id) {
    Registro13265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13265(Registro13265 r) {
    return r.valor + r.id;
}
