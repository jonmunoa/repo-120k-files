// fichero 50129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50129;

Registro50129 crear_registro50129(int id) {
    Registro50129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50129(Registro50129 r) {
    return r.valor + r.id;
}
