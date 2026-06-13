// fichero 33165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33165;

Registro33165 crear_registro33165(int id) {
    Registro33165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33165(Registro33165 r) {
    return r.valor + r.id;
}
