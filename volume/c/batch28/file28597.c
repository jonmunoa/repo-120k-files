// fichero 28597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28597;

Registro28597 crear_registro28597(int id) {
    Registro28597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28597(Registro28597 r) {
    return r.valor + r.id;
}
