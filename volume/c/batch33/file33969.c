// fichero 33969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33969;

Registro33969 crear_registro33969(int id) {
    Registro33969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33969(Registro33969 r) {
    return r.valor + r.id;
}
