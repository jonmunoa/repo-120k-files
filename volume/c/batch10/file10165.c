// fichero 10165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10165;

Registro10165 crear_registro10165(int id) {
    Registro10165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10165(Registro10165 r) {
    return r.valor + r.id;
}
