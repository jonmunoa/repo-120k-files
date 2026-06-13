// fichero 45461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45461;

Registro45461 crear_registro45461(int id) {
    Registro45461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45461(Registro45461 r) {
    return r.valor + r.id;
}
