// fichero 33857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33857;

Registro33857 crear_registro33857(int id) {
    Registro33857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33857(Registro33857 r) {
    return r.valor + r.id;
}
