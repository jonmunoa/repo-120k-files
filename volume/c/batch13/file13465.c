// fichero 13465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13465;

Registro13465 crear_registro13465(int id) {
    Registro13465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13465(Registro13465 r) {
    return r.valor + r.id;
}
