// fichero 13673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13673;

Registro13673 crear_registro13673(int id) {
    Registro13673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13673(Registro13673 r) {
    return r.valor + r.id;
}
