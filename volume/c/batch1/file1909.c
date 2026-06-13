// fichero 1909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1909;

Registro1909 crear_registro1909(int id) {
    Registro1909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1909(Registro1909 r) {
    return r.valor + r.id;
}
