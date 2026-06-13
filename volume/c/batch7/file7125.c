// fichero 7125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7125;

Registro7125 crear_registro7125(int id) {
    Registro7125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7125(Registro7125 r) {
    return r.valor + r.id;
}
