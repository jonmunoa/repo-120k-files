// fichero 13973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13973;

Registro13973 crear_registro13973(int id) {
    Registro13973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13973(Registro13973 r) {
    return r.valor + r.id;
}
