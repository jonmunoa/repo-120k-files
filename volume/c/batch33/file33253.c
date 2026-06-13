// fichero 33253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33253;

Registro33253 crear_registro33253(int id) {
    Registro33253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33253(Registro33253 r) {
    return r.valor + r.id;
}
