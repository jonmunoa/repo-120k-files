// fichero 32313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32313;

Registro32313 crear_registro32313(int id) {
    Registro32313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32313(Registro32313 r) {
    return r.valor + r.id;
}
