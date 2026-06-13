// fichero 33209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33209;

Registro33209 crear_registro33209(int id) {
    Registro33209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33209(Registro33209 r) {
    return r.valor + r.id;
}
