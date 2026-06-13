// fichero 34253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34253;

Registro34253 crear_registro34253(int id) {
    Registro34253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34253(Registro34253 r) {
    return r.valor + r.id;
}
