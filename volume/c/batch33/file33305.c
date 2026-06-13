// fichero 33305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33305;

Registro33305 crear_registro33305(int id) {
    Registro33305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33305(Registro33305 r) {
    return r.valor + r.id;
}
