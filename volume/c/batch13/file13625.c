// fichero 13625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13625;

Registro13625 crear_registro13625(int id) {
    Registro13625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13625(Registro13625 r) {
    return r.valor + r.id;
}
