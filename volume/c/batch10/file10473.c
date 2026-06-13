// fichero 10473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10473;

Registro10473 crear_registro10473(int id) {
    Registro10473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10473(Registro10473 r) {
    return r.valor + r.id;
}
