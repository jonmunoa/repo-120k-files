// fichero 28937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28937;

Registro28937 crear_registro28937(int id) {
    Registro28937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28937(Registro28937 r) {
    return r.valor + r.id;
}
