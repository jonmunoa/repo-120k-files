// fichero 50461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50461;

Registro50461 crear_registro50461(int id) {
    Registro50461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50461(Registro50461 r) {
    return r.valor + r.id;
}
