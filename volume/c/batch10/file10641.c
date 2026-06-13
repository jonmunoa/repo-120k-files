// fichero 10641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10641;

Registro10641 crear_registro10641(int id) {
    Registro10641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10641(Registro10641 r) {
    return r.valor + r.id;
}
