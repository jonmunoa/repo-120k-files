// fichero 33269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33269;

Registro33269 crear_registro33269(int id) {
    Registro33269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33269(Registro33269 r) {
    return r.valor + r.id;
}
