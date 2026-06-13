// fichero 13969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13969;

Registro13969 crear_registro13969(int id) {
    Registro13969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13969(Registro13969 r) {
    return r.valor + r.id;
}
