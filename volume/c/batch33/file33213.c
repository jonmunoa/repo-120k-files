// fichero 33213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33213;

Registro33213 crear_registro33213(int id) {
    Registro33213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33213(Registro33213 r) {
    return r.valor + r.id;
}
