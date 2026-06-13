// fichero 46281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46281;

Registro46281 crear_registro46281(int id) {
    Registro46281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46281(Registro46281 r) {
    return r.valor + r.id;
}
