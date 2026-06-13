// fichero 6937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6937;

Registro6937 crear_registro6937(int id) {
    Registro6937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6937(Registro6937 r) {
    return r.valor + r.id;
}
