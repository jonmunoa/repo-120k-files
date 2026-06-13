// fichero 4921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4921;

Registro4921 crear_registro4921(int id) {
    Registro4921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4921(Registro4921 r) {
    return r.valor + r.id;
}
