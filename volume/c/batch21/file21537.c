// fichero 21537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21537;

Registro21537 crear_registro21537(int id) {
    Registro21537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21537(Registro21537 r) {
    return r.valor + r.id;
}
