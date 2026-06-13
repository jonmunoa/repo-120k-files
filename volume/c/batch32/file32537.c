// fichero 32537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32537;

Registro32537 crear_registro32537(int id) {
    Registro32537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32537(Registro32537 r) {
    return r.valor + r.id;
}
