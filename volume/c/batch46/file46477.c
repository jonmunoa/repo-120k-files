// fichero 46477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46477;

Registro46477 crear_registro46477(int id) {
    Registro46477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46477(Registro46477 r) {
    return r.valor + r.id;
}
