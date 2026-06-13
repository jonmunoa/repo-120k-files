// fichero 15989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15989;

Registro15989 crear_registro15989(int id) {
    Registro15989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15989(Registro15989 r) {
    return r.valor + r.id;
}
