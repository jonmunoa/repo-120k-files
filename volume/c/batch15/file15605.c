// fichero 15605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15605;

Registro15605 crear_registro15605(int id) {
    Registro15605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15605(Registro15605 r) {
    return r.valor + r.id;
}
