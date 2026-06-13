// fichero 13197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13197;

Registro13197 crear_registro13197(int id) {
    Registro13197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13197(Registro13197 r) {
    return r.valor + r.id;
}
