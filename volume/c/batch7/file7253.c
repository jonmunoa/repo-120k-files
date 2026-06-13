// fichero 7253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7253;

Registro7253 crear_registro7253(int id) {
    Registro7253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7253(Registro7253 r) {
    return r.valor + r.id;
}
