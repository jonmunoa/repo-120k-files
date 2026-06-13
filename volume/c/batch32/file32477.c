// fichero 32477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32477;

Registro32477 crear_registro32477(int id) {
    Registro32477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32477(Registro32477 r) {
    return r.valor + r.id;
}
