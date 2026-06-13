// fichero 33193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33193;

Registro33193 crear_registro33193(int id) {
    Registro33193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33193(Registro33193 r) {
    return r.valor + r.id;
}
