// fichero 26281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26281;

Registro26281 crear_registro26281(int id) {
    Registro26281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26281(Registro26281 r) {
    return r.valor + r.id;
}
