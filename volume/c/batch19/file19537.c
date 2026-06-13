// fichero 19537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19537;

Registro19537 crear_registro19537(int id) {
    Registro19537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19537(Registro19537 r) {
    return r.valor + r.id;
}
