// fichero 33017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33017;

Registro33017 crear_registro33017(int id) {
    Registro33017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33017(Registro33017 r) {
    return r.valor + r.id;
}
