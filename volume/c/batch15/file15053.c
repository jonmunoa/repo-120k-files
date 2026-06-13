// fichero 15053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15053;

Registro15053 crear_registro15053(int id) {
    Registro15053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15053(Registro15053 r) {
    return r.valor + r.id;
}
