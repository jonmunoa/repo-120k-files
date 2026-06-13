// fichero 33393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33393;

Registro33393 crear_registro33393(int id) {
    Registro33393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33393(Registro33393 r) {
    return r.valor + r.id;
}
