// fichero 13585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13585;

Registro13585 crear_registro13585(int id) {
    Registro13585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13585(Registro13585 r) {
    return r.valor + r.id;
}
