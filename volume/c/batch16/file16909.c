// fichero 16909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16909;

Registro16909 crear_registro16909(int id) {
    Registro16909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16909(Registro16909 r) {
    return r.valor + r.id;
}
