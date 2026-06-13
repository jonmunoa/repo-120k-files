// fichero 24213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24213;

Registro24213 crear_registro24213(int id) {
    Registro24213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24213(Registro24213 r) {
    return r.valor + r.id;
}
