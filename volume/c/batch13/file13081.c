// fichero 13081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13081;

Registro13081 crear_registro13081(int id) {
    Registro13081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13081(Registro13081 r) {
    return r.valor + r.id;
}
