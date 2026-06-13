// fichero 213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro213;

Registro213 crear_registro213(int id) {
    Registro213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro213(Registro213 r) {
    return r.valor + r.id;
}
