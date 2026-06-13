// fichero 52909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52909;

Registro52909 crear_registro52909(int id) {
    Registro52909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52909(Registro52909 r) {
    return r.valor + r.id;
}
