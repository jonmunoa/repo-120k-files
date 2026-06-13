// fichero 537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro537;

Registro537 crear_registro537(int id) {
    Registro537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro537(Registro537 r) {
    return r.valor + r.id;
}
