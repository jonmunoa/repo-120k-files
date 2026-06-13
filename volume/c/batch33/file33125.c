// fichero 33125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33125;

Registro33125 crear_registro33125(int id) {
    Registro33125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33125(Registro33125 r) {
    return r.valor + r.id;
}
