// fichero 27537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27537;

Registro27537 crear_registro27537(int id) {
    Registro27537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27537(Registro27537 r) {
    return r.valor + r.id;
}
