// fichero 20253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20253;

Registro20253 crear_registro20253(int id) {
    Registro20253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20253(Registro20253 r) {
    return r.valor + r.id;
}
