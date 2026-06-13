// fichero 24597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24597;

Registro24597 crear_registro24597(int id) {
    Registro24597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24597(Registro24597 r) {
    return r.valor + r.id;
}
