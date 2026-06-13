// fichero 48625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48625;

Registro48625 crear_registro48625(int id) {
    Registro48625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48625(Registro48625 r) {
    return r.valor + r.id;
}
