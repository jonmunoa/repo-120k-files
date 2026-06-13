// fichero 45373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45373;

Registro45373 crear_registro45373(int id) {
    Registro45373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45373(Registro45373 r) {
    return r.valor + r.id;
}
