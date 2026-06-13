// fichero 53909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53909;

Registro53909 crear_registro53909(int id) {
    Registro53909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53909(Registro53909 r) {
    return r.valor + r.id;
}
