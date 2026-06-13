// fichero 34909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34909;

Registro34909 crear_registro34909(int id) {
    Registro34909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34909(Registro34909 r) {
    return r.valor + r.id;
}
