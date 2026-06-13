// fichero 8537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8537;

Registro8537 crear_registro8537(int id) {
    Registro8537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8537(Registro8537 r) {
    return r.valor + r.id;
}
