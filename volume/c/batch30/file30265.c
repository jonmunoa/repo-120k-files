// fichero 30265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30265;

Registro30265 crear_registro30265(int id) {
    Registro30265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30265(Registro30265 r) {
    return r.valor + r.id;
}
