// fichero 14725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14725;

Registro14725 crear_registro14725(int id) {
    Registro14725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14725(Registro14725 r) {
    return r.valor + r.id;
}
