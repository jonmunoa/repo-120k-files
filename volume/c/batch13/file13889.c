// fichero 13889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13889;

Registro13889 crear_registro13889(int id) {
    Registro13889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13889(Registro13889 r) {
    return r.valor + r.id;
}
