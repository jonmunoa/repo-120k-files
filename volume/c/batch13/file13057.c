// fichero 13057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13057;

Registro13057 crear_registro13057(int id) {
    Registro13057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13057(Registro13057 r) {
    return r.valor + r.id;
}
