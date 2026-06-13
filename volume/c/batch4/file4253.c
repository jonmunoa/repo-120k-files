// fichero 4253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4253;

Registro4253 crear_registro4253(int id) {
    Registro4253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4253(Registro4253 r) {
    return r.valor + r.id;
}
