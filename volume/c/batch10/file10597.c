// fichero 10597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10597;

Registro10597 crear_registro10597(int id) {
    Registro10597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10597(Registro10597 r) {
    return r.valor + r.id;
}
