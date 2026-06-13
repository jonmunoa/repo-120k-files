// fichero 33409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33409;

Registro33409 crear_registro33409(int id) {
    Registro33409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33409(Registro33409 r) {
    return r.valor + r.id;
}
