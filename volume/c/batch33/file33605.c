// fichero 33605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33605;

Registro33605 crear_registro33605(int id) {
    Registro33605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33605(Registro33605 r) {
    return r.valor + r.id;
}
