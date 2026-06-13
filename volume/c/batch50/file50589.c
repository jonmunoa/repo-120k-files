// fichero 50589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50589;

Registro50589 crear_registro50589(int id) {
    Registro50589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50589(Registro50589 r) {
    return r.valor + r.id;
}
