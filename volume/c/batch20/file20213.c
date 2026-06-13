// fichero 20213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20213;

Registro20213 crear_registro20213(int id) {
    Registro20213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20213(Registro20213 r) {
    return r.valor + r.id;
}
