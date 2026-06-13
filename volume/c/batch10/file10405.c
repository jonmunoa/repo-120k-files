// fichero 10405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10405;

Registro10405 crear_registro10405(int id) {
    Registro10405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10405(Registro10405 r) {
    return r.valor + r.id;
}
