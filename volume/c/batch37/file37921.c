// fichero 37921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37921;

Registro37921 crear_registro37921(int id) {
    Registro37921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37921(Registro37921 r) {
    return r.valor + r.id;
}
