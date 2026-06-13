// fichero 50413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50413;

Registro50413 crear_registro50413(int id) {
    Registro50413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50413(Registro50413 r) {
    return r.valor + r.id;
}
