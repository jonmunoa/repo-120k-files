// fichero 13929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13929;

Registro13929 crear_registro13929(int id) {
    Registro13929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13929(Registro13929 r) {
    return r.valor + r.id;
}
