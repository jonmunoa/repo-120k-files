// fichero 34481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34481;

Registro34481 crear_registro34481(int id) {
    Registro34481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34481(Registro34481 r) {
    return r.valor + r.id;
}
