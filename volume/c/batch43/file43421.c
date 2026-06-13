// fichero 43421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43421;

Registro43421 crear_registro43421(int id) {
    Registro43421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43421(Registro43421 r) {
    return r.valor + r.id;
}
