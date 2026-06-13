// fichero 18537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18537;

Registro18537 crear_registro18537(int id) {
    Registro18537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18537(Registro18537 r) {
    return r.valor + r.id;
}
