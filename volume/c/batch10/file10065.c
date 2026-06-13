// fichero 10065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10065;

Registro10065 crear_registro10065(int id) {
    Registro10065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10065(Registro10065 r) {
    return r.valor + r.id;
}
