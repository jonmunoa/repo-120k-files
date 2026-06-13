// fichero 32909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32909;

Registro32909 crear_registro32909(int id) {
    Registro32909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32909(Registro32909 r) {
    return r.valor + r.id;
}
