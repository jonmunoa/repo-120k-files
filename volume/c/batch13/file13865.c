// fichero 13865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13865;

Registro13865 crear_registro13865(int id) {
    Registro13865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13865(Registro13865 r) {
    return r.valor + r.id;
}
