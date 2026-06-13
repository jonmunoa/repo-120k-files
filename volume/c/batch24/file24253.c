// fichero 24253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24253;

Registro24253 crear_registro24253(int id) {
    Registro24253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24253(Registro24253 r) {
    return r.valor + r.id;
}
