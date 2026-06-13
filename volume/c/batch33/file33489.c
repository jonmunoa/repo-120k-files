// fichero 33489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33489;

Registro33489 crear_registro33489(int id) {
    Registro33489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33489(Registro33489 r) {
    return r.valor + r.id;
}
