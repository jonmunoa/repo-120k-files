// fichero 13661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13661;

Registro13661 crear_registro13661(int id) {
    Registro13661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13661(Registro13661 r) {
    return r.valor + r.id;
}
