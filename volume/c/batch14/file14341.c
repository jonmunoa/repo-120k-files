// fichero 14341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14341;

Registro14341 crear_registro14341(int id) {
    Registro14341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14341(Registro14341 r) {
    return r.valor + r.id;
}
