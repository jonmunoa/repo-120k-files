// fichero 29337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29337;

Registro29337 crear_registro29337(int id) {
    Registro29337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29337(Registro29337 r) {
    return r.valor + r.id;
}
