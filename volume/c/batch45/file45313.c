// fichero 45313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45313;

Registro45313 crear_registro45313(int id) {
    Registro45313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45313(Registro45313 r) {
    return r.valor + r.id;
}
