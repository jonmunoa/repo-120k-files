// fichero 33173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33173;

Registro33173 crear_registro33173(int id) {
    Registro33173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33173(Registro33173 r) {
    return r.valor + r.id;
}
