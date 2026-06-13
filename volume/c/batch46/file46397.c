// fichero 46397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46397;

Registro46397 crear_registro46397(int id) {
    Registro46397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46397(Registro46397 r) {
    return r.valor + r.id;
}
