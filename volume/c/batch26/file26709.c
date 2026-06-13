// fichero 26709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26709;

Registro26709 crear_registro26709(int id) {
    Registro26709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26709(Registro26709 r) {
    return r.valor + r.id;
}
