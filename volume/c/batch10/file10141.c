// fichero 10141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10141;

Registro10141 crear_registro10141(int id) {
    Registro10141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10141(Registro10141 r) {
    return r.valor + r.id;
}
