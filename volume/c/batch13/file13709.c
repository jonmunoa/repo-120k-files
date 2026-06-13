// fichero 13709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13709;

Registro13709 crear_registro13709(int id) {
    Registro13709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13709(Registro13709 r) {
    return r.valor + r.id;
}
