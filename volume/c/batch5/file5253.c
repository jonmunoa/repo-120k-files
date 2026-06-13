// fichero 5253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5253;

Registro5253 crear_registro5253(int id) {
    Registro5253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5253(Registro5253 r) {
    return r.valor + r.id;
}
