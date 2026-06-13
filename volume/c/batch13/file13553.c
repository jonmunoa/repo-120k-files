// fichero 13553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13553;

Registro13553 crear_registro13553(int id) {
    Registro13553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13553(Registro13553 r) {
    return r.valor + r.id;
}
