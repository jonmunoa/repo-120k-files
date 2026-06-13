// fichero 13325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13325;

Registro13325 crear_registro13325(int id) {
    Registro13325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13325(Registro13325 r) {
    return r.valor + r.id;
}
