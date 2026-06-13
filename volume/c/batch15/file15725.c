// fichero 15725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15725;

Registro15725 crear_registro15725(int id) {
    Registro15725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15725(Registro15725 r) {
    return r.valor + r.id;
}
