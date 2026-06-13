// fichero 15033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15033;

Registro15033 crear_registro15033(int id) {
    Registro15033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15033(Registro15033 r) {
    return r.valor + r.id;
}
