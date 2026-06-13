// fichero 10481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10481;

Registro10481 crear_registro10481(int id) {
    Registro10481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10481(Registro10481 r) {
    return r.valor + r.id;
}
