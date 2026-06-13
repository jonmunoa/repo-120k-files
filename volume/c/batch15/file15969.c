// fichero 15969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15969;

Registro15969 crear_registro15969(int id) {
    Registro15969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15969(Registro15969 r) {
    return r.valor + r.id;
}
