// fichero 4597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4597;

Registro4597 crear_registro4597(int id) {
    Registro4597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4597(Registro4597 r) {
    return r.valor + r.id;
}
