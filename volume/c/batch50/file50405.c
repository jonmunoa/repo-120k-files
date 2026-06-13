// fichero 50405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50405;

Registro50405 crear_registro50405(int id) {
    Registro50405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50405(Registro50405 r) {
    return r.valor + r.id;
}
