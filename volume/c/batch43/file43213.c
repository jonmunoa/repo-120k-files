// fichero 43213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43213;

Registro43213 crear_registro43213(int id) {
    Registro43213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43213(Registro43213 r) {
    return r.valor + r.id;
}
