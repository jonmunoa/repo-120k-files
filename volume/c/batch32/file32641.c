// fichero 32641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32641;

Registro32641 crear_registro32641(int id) {
    Registro32641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32641(Registro32641 r) {
    return r.valor + r.id;
}
