// fichero 13765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13765;

Registro13765 crear_registro13765(int id) {
    Registro13765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13765(Registro13765 r) {
    return r.valor + r.id;
}
