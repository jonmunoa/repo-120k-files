// fichero 4185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4185;

Registro4185 crear_registro4185(int id) {
    Registro4185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4185(Registro4185 r) {
    return r.valor + r.id;
}
