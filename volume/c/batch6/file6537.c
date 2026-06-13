// fichero 6537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6537;

Registro6537 crear_registro6537(int id) {
    Registro6537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6537(Registro6537 r) {
    return r.valor + r.id;
}
