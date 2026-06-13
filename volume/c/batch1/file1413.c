// fichero 1413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1413;

Registro1413 crear_registro1413(int id) {
    Registro1413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1413(Registro1413 r) {
    return r.valor + r.id;
}
