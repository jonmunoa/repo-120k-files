// fichero 13713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13713;

Registro13713 crear_registro13713(int id) {
    Registro13713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13713(Registro13713 r) {
    return r.valor + r.id;
}
