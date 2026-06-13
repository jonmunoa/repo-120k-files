// fichero 33853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33853;

Registro33853 crear_registro33853(int id) {
    Registro33853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33853(Registro33853 r) {
    return r.valor + r.id;
}
