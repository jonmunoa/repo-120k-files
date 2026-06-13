// fichero 13737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13737;

Registro13737 crear_registro13737(int id) {
    Registro13737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13737(Registro13737 r) {
    return r.valor + r.id;
}
