// fichero 43933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43933;

Registro43933 crear_registro43933(int id) {
    Registro43933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43933(Registro43933 r) {
    return r.valor + r.id;
}
