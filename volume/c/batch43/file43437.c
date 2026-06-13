// fichero 43437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43437;

Registro43437 crear_registro43437(int id) {
    Registro43437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43437(Registro43437 r) {
    return r.valor + r.id;
}
