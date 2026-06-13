// fichero 50253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50253;

Registro50253 crear_registro50253(int id) {
    Registro50253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50253(Registro50253 r) {
    return r.valor + r.id;
}
