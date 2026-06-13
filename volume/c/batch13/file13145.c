// fichero 13145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13145;

Registro13145 crear_registro13145(int id) {
    Registro13145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13145(Registro13145 r) {
    return r.valor + r.id;
}
