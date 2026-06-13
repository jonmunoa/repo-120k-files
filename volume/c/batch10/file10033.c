// fichero 10033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10033;

Registro10033 crear_registro10033(int id) {
    Registro10033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10033(Registro10033 r) {
    return r.valor + r.id;
}
