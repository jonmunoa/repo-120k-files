// fichero 13945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13945;

Registro13945 crear_registro13945(int id) {
    Registro13945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13945(Registro13945 r) {
    return r.valor + r.id;
}
