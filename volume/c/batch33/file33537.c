// fichero 33537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33537;

Registro33537 crear_registro33537(int id) {
    Registro33537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33537(Registro33537 r) {
    return r.valor + r.id;
}
