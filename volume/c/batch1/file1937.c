// fichero 1937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1937;

Registro1937 crear_registro1937(int id) {
    Registro1937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1937(Registro1937 r) {
    return r.valor + r.id;
}
