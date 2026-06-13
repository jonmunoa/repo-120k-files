// fichero 50269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50269;

Registro50269 crear_registro50269(int id) {
    Registro50269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50269(Registro50269 r) {
    return r.valor + r.id;
}
