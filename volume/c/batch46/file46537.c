// fichero 46537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46537;

Registro46537 crear_registro46537(int id) {
    Registro46537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46537(Registro46537 r) {
    return r.valor + r.id;
}
