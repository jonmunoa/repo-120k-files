// fichero 26477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26477;

Registro26477 crear_registro26477(int id) {
    Registro26477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26477(Registro26477 r) {
    return r.valor + r.id;
}
