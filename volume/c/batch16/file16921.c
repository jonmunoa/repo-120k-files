// fichero 16921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16921;

Registro16921 crear_registro16921(int id) {
    Registro16921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16921(Registro16921 r) {
    return r.valor + r.id;
}
