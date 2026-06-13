// fichero 45417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45417;

Registro45417 crear_registro45417(int id) {
    Registro45417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45417(Registro45417 r) {
    return r.valor + r.id;
}
