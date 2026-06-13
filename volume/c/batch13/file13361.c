// fichero 13361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13361;

Registro13361 crear_registro13361(int id) {
    Registro13361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13361(Registro13361 r) {
    return r.valor + r.id;
}
