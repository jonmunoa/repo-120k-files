// fichero 33973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33973;

Registro33973 crear_registro33973(int id) {
    Registro33973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33973(Registro33973 r) {
    return r.valor + r.id;
}
