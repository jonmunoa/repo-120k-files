// fichero 10073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10073;

Registro10073 crear_registro10073(int id) {
    Registro10073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10073(Registro10073 r) {
    return r.valor + r.id;
}
