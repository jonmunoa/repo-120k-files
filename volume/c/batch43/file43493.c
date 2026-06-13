// fichero 43493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43493;

Registro43493 crear_registro43493(int id) {
    Registro43493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43493(Registro43493 r) {
    return r.valor + r.id;
}
