// fichero 15233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15233;

Registro15233 crear_registro15233(int id) {
    Registro15233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15233(Registro15233 r) {
    return r.valor + r.id;
}
