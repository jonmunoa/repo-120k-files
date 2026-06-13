// fichero 46973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46973;

Registro46973 crear_registro46973(int id) {
    Registro46973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46973(Registro46973 r) {
    return r.valor + r.id;
}
