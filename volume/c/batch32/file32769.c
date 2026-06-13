// fichero 32769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32769;

Registro32769 crear_registro32769(int id) {
    Registro32769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32769(Registro32769 r) {
    return r.valor + r.id;
}
