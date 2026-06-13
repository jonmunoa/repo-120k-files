// fichero 15477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15477;

Registro15477 crear_registro15477(int id) {
    Registro15477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15477(Registro15477 r) {
    return r.valor + r.id;
}
