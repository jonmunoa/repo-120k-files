// fichero 15129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15129;

Registro15129 crear_registro15129(int id) {
    Registro15129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15129(Registro15129 r) {
    return r.valor + r.id;
}
