// fichero 13581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13581;

Registro13581 crear_registro13581(int id) {
    Registro13581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13581(Registro13581 r) {
    return r.valor + r.id;
}
