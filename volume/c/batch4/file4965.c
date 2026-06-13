// fichero 4965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4965;

Registro4965 crear_registro4965(int id) {
    Registro4965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4965(Registro4965 r) {
    return r.valor + r.id;
}
