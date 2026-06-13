// fichero 50597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50597;

Registro50597 crear_registro50597(int id) {
    Registro50597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50597(Registro50597 r) {
    return r.valor + r.id;
}
