// fichero 45473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45473;

Registro45473 crear_registro45473(int id) {
    Registro45473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45473(Registro45473 r) {
    return r.valor + r.id;
}
