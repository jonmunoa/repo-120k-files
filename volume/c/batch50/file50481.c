// fichero 50481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50481;

Registro50481 crear_registro50481(int id) {
    Registro50481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50481(Registro50481 r) {
    return r.valor + r.id;
}
