// fichero 43189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43189;

Registro43189 crear_registro43189(int id) {
    Registro43189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43189(Registro43189 r) {
    return r.valor + r.id;
}
