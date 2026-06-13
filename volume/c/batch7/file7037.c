// fichero 7037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7037;

Registro7037 crear_registro7037(int id) {
    Registro7037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7037(Registro7037 r) {
    return r.valor + r.id;
}
