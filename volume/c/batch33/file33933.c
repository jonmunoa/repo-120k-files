// fichero 33933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33933;

Registro33933 crear_registro33933(int id) {
    Registro33933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33933(Registro33933 r) {
    return r.valor + r.id;
}
