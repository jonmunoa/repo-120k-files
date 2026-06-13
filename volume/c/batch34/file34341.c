// fichero 34341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34341;

Registro34341 crear_registro34341(int id) {
    Registro34341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34341(Registro34341 r) {
    return r.valor + r.id;
}
