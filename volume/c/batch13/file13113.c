// fichero 13113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13113;

Registro13113 crear_registro13113(int id) {
    Registro13113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13113(Registro13113 r) {
    return r.valor + r.id;
}
