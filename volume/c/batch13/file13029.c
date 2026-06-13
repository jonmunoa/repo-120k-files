// fichero 13029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13029;

Registro13029 crear_registro13029(int id) {
    Registro13029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13029(Registro13029 r) {
    return r.valor + r.id;
}
