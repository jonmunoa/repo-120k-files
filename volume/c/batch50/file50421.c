// fichero 50421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50421;

Registro50421 crear_registro50421(int id) {
    Registro50421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50421(Registro50421 r) {
    return r.valor + r.id;
}
