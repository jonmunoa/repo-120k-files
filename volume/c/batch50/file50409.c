// fichero 50409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50409;

Registro50409 crear_registro50409(int id) {
    Registro50409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50409(Registro50409 r) {
    return r.valor + r.id;
}
