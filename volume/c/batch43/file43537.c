// fichero 43537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43537;

Registro43537 crear_registro43537(int id) {
    Registro43537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43537(Registro43537 r) {
    return r.valor + r.id;
}
