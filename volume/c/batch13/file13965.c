// fichero 13965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13965;

Registro13965 crear_registro13965(int id) {
    Registro13965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13965(Registro13965 r) {
    return r.valor + r.id;
}
