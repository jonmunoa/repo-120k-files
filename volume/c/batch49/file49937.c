// fichero 49937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49937;

Registro49937 crear_registro49937(int id) {
    Registro49937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49937(Registro49937 r) {
    return r.valor + r.id;
}
