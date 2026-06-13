// fichero 43217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43217;

Registro43217 crear_registro43217(int id) {
    Registro43217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43217(Registro43217 r) {
    return r.valor + r.id;
}
