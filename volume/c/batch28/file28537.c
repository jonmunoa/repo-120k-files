// fichero 28537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28537;

Registro28537 crear_registro28537(int id) {
    Registro28537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28537(Registro28537 r) {
    return r.valor + r.id;
}
