// fichero 50605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50605;

Registro50605 crear_registro50605(int id) {
    Registro50605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50605(Registro50605 r) {
    return r.valor + r.id;
}
